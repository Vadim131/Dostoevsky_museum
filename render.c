#include "main.h"
#include "camera.h"
#include "render.h"
#include "textures.h"
#include "front_from_stb.h"
#include "Structures.h"
#include "objects.h"

#define LIGHTPOSITION0 2.90f, 1.0f, 0.1f, 1.0f
#define LIGHTPOSITION1 0.0f, 2.3f, 0.0f, 1.0f
#define LIGHTDIFFUSE0 0.7f, 0.7f, 0.68f, 1.0f
#define LIGHTDIFFUSE1 0.3f, 0.3f, 0.22f, 1.0f
#define LIGHTAMBIENT 0.1f, 0.1f, 0.1f
#define LIGHTFOV 100.0f
#define LIGHTTWOSIDE GL_FALSE
/** Do not use more than 7! **/
#define LEVELOFPCF 2
#define PCFJITTERVALUES16 {0.0, 0.0}, {0.0051, -0.032}, {-0.0175, 0.03875}, {0.0025, 0.0625}, {0.0175, 0.01875}, {-0.009475, -0.01375}, {0.01079, 0.01997}

static GLuint Render_SCENENUM_;
static GLuint Render_DEPTHSHADOWTEX_[LEVELOFPCF];
static float Render_MATMODELVIEW_[LEVELOFPCF][16];
static float Render_MATPROJECTION_[LEVELOFPCF][16];

/** PRE-RENDER **/
void Render_makeShadowTexPref(int index){
    float constant[] = {0.0, 0.0, 0.0, 0.03};

        glTexEnvi ( GL_TEXTURE_ENV, GL_COMBINE_RGB, GL_INTERPOLATE);
        glTexEnvi ( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_COMBINE);
        glTexEnvfv( GL_TEXTURE_ENV, GL_TEXTURE_ENV_COLOR, constant);
        glTexEnvi ( GL_TEXTURE_ENV, GL_SOURCE1_RGB, GL_PREVIOUS );
        glTexEnvi ( GL_TEXTURE_ENV, GL_SOURCE0_RGB, GL_TEXTURE);
        glTexEnvi ( GL_TEXTURE_ENV, GL_SOURCE2_RGB, GL_CONSTANT);

}

void PreRender_MakeShadowMap(){
    int w, h;
    Core_getWH(&w, &h);

	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

	glTexParameteri(GL_TEXTURE_2D, GL_DEPTH_TEXTURE_MODE_ARB, GL_LUMINANCE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_COMPARE_MODE_ARB, GL_COMPARE_R_TO_TEXTURE_ARB);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_COMPARE_FUNC_ARB, GL_LEQUAL);

	glTexGeni( GL_S, GL_TEXTURE_GEN_MODE, GL_EYE_LINEAR);
	glTexGeni( GL_T, GL_TEXTURE_GEN_MODE, GL_EYE_LINEAR);
	glTexGeni( GL_R, GL_TEXTURE_GEN_MODE, GL_EYE_LINEAR);
	glTexGeni( GL_Q, GL_TEXTURE_GEN_MODE, GL_EYE_LINEAR);

	glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, w, h, 0,
                       GL_DEPTH_COMPONENT, GL_UNSIGNED_BYTE, NULL);

    glBindTexture(GL_TEXTURE_2D, 0);

}

void PreRender_makePCFbias(int index){

    float pcfList[LEVELOFPCF][2] = {PCFJITTERVALUES16};
    glTranslatef(pcfList[index][0], pcfList[index][1], 0.0);
    glRotatef(pcfList[index][1], 1.0, 0.0, 0.0);


}

void PreRender_DrawToShadowMap(int index){
    int w, h;
    Core_getWH(&w, &h);

    float lightpos0[4] = {LIGHTPOSITION0};
    float lightpos1[4] = {LIGHTPOSITION1};

    glColorMask ( GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE );
	glDisable   ( GL_TEXTURE_2D );
    // setup projection
	glViewport( 0, 0, w, h);
	glLoadIdentity ();
	glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
	glMatrixMode( GL_PROJECTION );
        glPushMatrix();
            glLoadIdentity();
            gluPerspective(LIGHTFOV, (float)w/h, 0.01, 10);
            gluLookAt(lightpos0[0], lightpos0[1], lightpos0[2], 0, 1, 0, 0, 1, 0);
            PreRender_makePCFbias(index);

	glMatrixMode( GL_MODELVIEW );

     // get modelview and projections matrices
    glGetFloatv( GL_MODELVIEW_MATRIX,  Render_MATMODELVIEW_[index]);
    glGetFloatv( GL_PROJECTION_MATRIX, Render_MATPROJECTION_[index]);
	// now render scene from light position

	ObjectsSpecial_statObj();
    // copy depth map into texture
	glBindTexture( GL_TEXTURE_2D, Render_DEPTHSHADOWTEX_[index]);
	glCopyTexImage2D ( GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, 0, 0, w,h, 0 );
    // restore state
    glBindTexture(GL_TEXTURE_2D, 0);
	glDisable( GL_POLYGON_OFFSET_FILL );
	glColorMask( GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE );
	glEnable( GL_TEXTURE_2D );

	glMatrixMode( GL_PROJECTION );
        glPopMatrix();
	glMatrixMode( GL_MODELVIEW );
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

}

void PreRender_makeShadowMaps(){
    glGenTextures(LEVELOFPCF, &Render_DEPTHSHADOWTEX_);

    for (int i = 0; i < LEVELOFPCF; ++i){
        glActiveTexture(GL_TEXTURE1+i);
        glBindTexture(GL_TEXTURE_2D, Render_DEPTHSHADOWTEX_[i]);
        glEnable(GL_TEXTURE_2D);
            PreRender_MakeShadowMap();
            PreRender_DrawToShadowMap(i);
            Render_makeShadowTexPref(i);
        glDisable(GL_TEXTURE_2D);
        glActiveTexture(GL_TEXTURE0);
    }
}

void PreRender_MakeShadowedScene(){
    int w, h;
    float PS[] = { 1, 0, 0, 0 };
    float PT[] = { 0, 1, 0, 0 };
    float PR[] = { 0, 0, 1, 0 };
    float PQ[] = { 0, 0, 0, 1 };

    Core_getWH(&w, &h);
    glViewport(0, 0, w, h);
    glDisable(GL_CULL_FACE);

    for (int i = 0; i < LEVELOFPCF; ++i){
        glActiveTexture(GL_TEXTURE1+i);
        glBindTexture(GL_TEXTURE_2D, Render_DEPTHSHADOWTEX_[i]);
            glEnable(GL_TEXTURE_2D);
            glEnable ( GL_TEXTURE_GEN_S );
            glEnable ( GL_TEXTURE_GEN_T );
            glEnable ( GL_TEXTURE_GEN_R );
            glEnable ( GL_TEXTURE_GEN_Q );
            glEnable(GL_NORMALIZE);

            glMatrixMode  ( GL_TEXTURE );
            glPushMatrix  ();

            glLoadIdentity ();
            glTranslatef   ( 0.5, 0.5, 0.5 );
            glScalef       ( 0.5, 0.5, 0.5 );
            glMultMatrixf  ( Render_MATMODELVIEW_[i] );
            glMultMatrixf  ( Render_MATPROJECTION_[i] );
            glMatrixMode (GL_MODELVIEW);

            glTexGenfv ( GL_S, GL_EYE_PLANE, &PS);
            glTexGenfv ( GL_T, GL_EYE_PLANE, &PT);
            glTexGenfv ( GL_R, GL_EYE_PLANE, &PR);
            glTexGenfv ( GL_Q, GL_EYE_PLANE, &PQ);
    }

    glActiveTexture(GL_TEXTURE0);
    Objects_makeScene();
   /* Render_statObj();
    Objects_drawGlass();*/

    for (int i = 0; i < LEVELOFPCF; ++i){
        glActiveTexture(GL_TEXTURE1+i);
        glBindTexture(GL_TEXTURE_2D, 0);
        glMatrixMode  ( GL_TEXTURE );
            glLoadIdentity();
            glPopMatrix();
            glLoadIdentity();
        glMatrixMode( GL_MODELVIEW );

        glDisable ( GL_TEXTURE_GEN_S );
        glDisable ( GL_TEXTURE_GEN_T );
        glDisable ( GL_TEXTURE_GEN_R );
        glDisable ( GL_TEXTURE_GEN_Q );
        glDisable(GL_TEXTURE_2D);

    }
    glActiveTexture(GL_TEXTURE0);

}

void PreRender_makeDispList(){
    Render_SCENENUM_ = glGenLists(1);
    PreRender_makeShadowMaps();

    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_NORMAL_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    glNewList(Render_SCENENUM_, GL_COMPILE);
        PreRender_MakeShadowedScene();
    glEndList();
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisableClientState(GL_NORMAL_ARRAY);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
}

/** RENDER **/
void Render_getLightPos(float* x, float* y, float* z){
    float lightpos[4] = {LIGHTPOSITION0};
    *x = lightpos[0];
    *y = lightpos[1];
    *z = lightpos[2];
}

void Render_setLight(){
    GLfloat amb[] = {LIGHTAMBIENT};
    GLfloat light3_diffuse0[] = {LIGHTDIFFUSE0};
    GLfloat light3_diffuse1[] = {LIGHTDIFFUSE1};
    GLfloat light3_position0[] = {LIGHTPOSITION0};
    GLfloat light3_position1[] = {LIGHTPOSITION1};

    glEnable(GL_LIGHTING);

    glEnable(GL_LIGHT0);
    glLightModelf(GL_LIGHT_MODEL_TWO_SIDE, LIGHTTWOSIDE);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, amb);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light3_diffuse0);
    glLightfv(GL_LIGHT0, GL_POSITION, light3_position0);

    glEnable(GL_LIGHT1);
    glLightModelf(GL_LIGHT_MODEL_TWO_SIDE, LIGHTTWOSIDE);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, amb);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, light3_diffuse1);
    glLightfv(GL_LIGHT1, GL_POSITION, light3_position1);

}

void Render_drawSun(){
    glDisable(GL_TEXTURE_2D);
    glColor3f(1.0, 1.0, 0.0);
    glPointSize(40);
    glBegin(GL_POINTS);
    glVertex4f(LIGHTPOSITION0);
    glVertex4f(LIGHTPOSITION1);
    glEnd();
    glEnable(GL_TEXTURE_2D);

}

void Render_statObj(){
    for (int obj = 0; obj < getlenObjArray(); ++obj){
        StaticObject object = getElemFromScene(obj);
        glPushMatrix();
        glCallList(object.numOfList);
        glPopMatrix();
    }

}

void Render_drawFog(){

    GLuint fogMode[]= { GL_EXP, GL_EXP2, GL_LINEAR }; // Хранит три типа тумана
    GLuint fogfilter = 2;                    // Тип используемого тумана
    GLfloat fogColor[4]= {0.8, 0.8, 0.8, 1.0};
    glEnable(GL_FOG);
    glFogi(GL_FOG_MODE, fogMode[fogfilter]);// Выбираем тип тумана
    glFogfv(GL_FOG_COLOR, fogColor);        // Устанавливаем цвет тумана
    glFogf(GL_FOG_DENSITY, 0.8f);          // Насколько густым будет туман
    glHint(GL_FOG_HINT,  GL_NICEST);      // Вспомогательная установка тумана
    glFogf(GL_FOG_START, PlayerViewL - PlayerViewL*0.5);             // Глубина, с которой начинается туман
    glFogf(GL_FOG_END, PlayerViewL);

}

void Render_drawSkyBox(){
    glPushMatrix();

        float w, h;
        Core_getWH(&w, &h);
        glLoadIdentity();

        glActiveTexture(GL_TEXTURE0);
        Camera_RotateBack();
        glEnable(GL_TEXTURE_CUBE_MAP);
        glEnableClientState(GL_VERTEX_ARRAY);
        glEnableClientState(GL_TEXTURE_COORD_ARRAY);
        glDisable(GL_TEXTURE_2D);

        makeSkybox();

        glEnable(GL_TEXTURE_2D);
        glDisable(GL_TEXTURE_CUBE_MAP);
        glDisableClientState(GL_VERTEX_ARRAY);
        glDisableClientState(GL_TEXTURE_COORD_ARRAY);

    glPopMatrix();

}

void Render_All(){
    glDisable(GL_NORMALIZE);
    glDisable(GL_LIGHTING);
    glDisable(GL_DEPTH_TEST);
    Render_drawSkyBox();

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    Render_setLight();
   // glLoadIdentity();
     //float lightpos0[4] = {LIGHTPOSITION0};

    /* glMatrixMode( GL_PROJECTION );
            glLoadIdentity();

        glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();*/
    //gluLookAt(lightpos0[0], lightpos0[1], lightpos0[2], 0, 1, 0, 0, 1, 0);

    glCallList(Render_SCENENUM_);
    glFlush();
    Museum_drawPoints();

}

void Render_drawDEBAG(int fps){
   //from library
    Museum_drawInfos();
    Render_drawSun();
    char string[500];
    int x, y;
    double Xpos, Ypos, Zpos;
    Camera_getPosition(&Xpos, &Ypos, &Zpos, NULL, NULL, NULL);
    Core_getMOUSEPOS(&x, &y);
    sprintf(string, "FPS %d\nXmouse %d\nYmouse %d\nMPF %d\nXpos %f\nYpos %f\nZpos %f", fps, x, y, Core_getFRAMETIME(),
            Xpos, Ypos, Zpos);

    glDisable(GL_CULL_FACE);
    glPushMatrix();
        glLoadIdentity();
        glMatrixMode(GL_PROJECTION);
        glPushMatrix();
            int w, h;
            Core_getWH(&w, &h);
            glOrtho(0, w, 0, (float)w/h, 0, 1);
            float vertexes[] = {-0.99, 0.5,  -0.73, 0.5,  -0.73, 0.99, -0.99, 0.99};

            glDisable(GL_LIGHTING);
            glDisable(GL_DEPTH_TEST);

            glLoadIdentity();
            glEnableClientState(GL_VERTEX_ARRAY);
            glColor4f(1.0, 1.0, 1.0, 0.4);
            glVertexPointer(2, GL_FLOAT, 0, vertexes);
            glDrawArrays(GL_QUADS, 0, 4);

            glScaled(0.003, -0.005, 1.0);
            static char buffer[99999]; // ~500 chars
            int num_quads;

            glColor3f(0.0, 0.0, 0.0);
            num_quads = stb_easy_font_print(-328, -195, string, NULL, buffer, sizeof(buffer));
            glVertexPointer(2, GL_FLOAT, 16, buffer);
            glDrawArrays(GL_QUADS, 0, num_quads*4);
            glDisableClientState(GL_VERTEX_ARRAY);

            glEnable(GL_LIGHTING);
            glEnable(GL_DEPTH_TEST);

        glPopMatrix();
        glMatrixMode(GL_MODELVIEW);


    glPopMatrix();


}
