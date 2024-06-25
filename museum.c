#include "museum.h"
#include "main.h"
#include "camera.h"
#define radius 0.6
/** Amount **/
#define AMOUNTINFOS 5
/** Positions        x    z   **/
#define INFOPOINT0 -0.3f, 0.7f //стол
#define INFOPOINT1 1.1f, -0.8f // картина
#define INFOPOINT2 -0.5f, -1.4f //кабинет
#define INFOPOINT3 1.9f, 0.5f //шкаф
#define INFOPOINT4 -1.4f, -0.1f //часы

/** Paths **/
#define PROMPTPATH "./textures/Infosign.png"
#define INFOPATH0 "./textures/info1.png"
#define INFOPATH1 "./textures/info2.png"
#define INFOPATH2 "./textures/info3.png"
#define INFOPATH3 "./textures/info4.png"
#define INFOPATH4 "./textures/info5.png"

static int Museum_INFONOW_;
static double Museum_INFOPOINTS_[AMOUNTINFOS][2]  = {INFOPOINT0, INFOPOINT1, INFOPOINT2, INFOPOINT3, INFOPOINT4};
static char Museum_INFOTEXPATHS_[AMOUNTINFOS][1000] = {INFOPATH0, INFOPATH1, INFOPATH2, INFOPATH3, INFOPATH4};
static GLuint Museum_INFOTEXTURES_[AMOUNTINFOS];
static GLuint Museum_PROMPT_;

/** ADD VALUES IN SWITCH **/
void Museum_loadTextures(){
  //  glActiveTexture(GL_TEXTURE25);
    //glEnable(GL_TEXTURE_2D);
    loadStdTexture(&Museum_PROMPT_, PROMPTPATH);
    for (int i = 0; i < AMOUNTINFOS; ++i){
        loadStdTexture(&Museum_INFOTEXTURES_[i], Museum_INFOTEXPATHS_[i]);
    }
    //glDisable(GL_TEXTURE_2D);
    //glActiveTexture(GL_TEXTURE0);
}

void Museum_drawPoints(){
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_LIGHTING);
    glDisable(GL_CULL_FACE);
    for (int i = 0; i < AMOUNTINFOS; ++i){
        glPushMatrix();


        glTranslatef(-Museum_INFOPOINTS_[i][0], 0.0, -Museum_INFOPOINTS_[i][1]);
        GLfloat theta;
        GLfloat pi     = acos(-1.0);
        GLfloat step   = 6.0f; // чем больше шаг тем хуже диск
        GLfloat radiusP = 0.1;

        // рисуем диск по часовой стрелки GL_CW
        glBegin(GL_TRIANGLE_STRIP);
        glColor4f(0.0, 0.0, 1.0, 0.2);

        int counter = 0;
        for( GLfloat a = 0.0f; a <= 360.0f; a += step) {
            counter++;
            theta = 2.0f * pi * a / 180.0f;
            if (counter%3 == 0){
                glVertex3f(0.0, 0.0, 0.0);
            }
            glVertex3f(radiusP * cos(theta), 0.0f, radiusP * sin(theta));
        }
        glEnd();
        glPopMatrix();

    }

    glEnable(GL_DEPTH_TEST);

}

void Museum_drawInfos(){
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_LIGHTING);
    glDisable(GL_CULL_FACE);
    for (int i = 0; i < AMOUNTINFOS; ++i){
        glPushMatrix();


        glTranslatef(-Museum_INFOPOINTS_[i][0], 0.0, -Museum_INFOPOINTS_[i][1]);
        GLfloat theta;
        GLfloat pi     = acos(-1.0);
        GLfloat step   = 6.0f; // чем больше шаг тем хуже диск

        glBegin(GL_TRIANGLE_FAN);
        glColor4f(0.0, 0.0, 1.0, 0.4);
        for( GLfloat a = 0.0f; a < 360.0f; a += step) {
            theta = 2.0f * pi * a / 180.0f;
            glVertex3f(radius * cos(theta), 0.0f, radius * sin(theta));
        }
        glEnd();

        glBegin(GL_LINE_LOOP);
        glColor4f(0.0, 0.0, 0.0, 1.0);
        for( GLfloat a = 0.0f; a < 360.0f; a += step) {
            theta = 2.0f * pi * a / 180.0f;

            glVertex3f(radius * cos(theta), 0.0f, radius * sin(theta));
        }
        glEnd();
        glPopMatrix();



        glPopMatrix();

    }

    glEnable(GL_DEPTH_TEST);

}

void Museum_showPrompt(){
     float vertexes[] = {-1.0,-1.0,  1.0,-1.0,  1.0,1.0,  -1.0, 1.0};
     float texcoord[] = {0.0, 1.0,  1.0, 1.0,  1.0, 0.0,  0.0, 0.0};

        glDisable(GL_DEPTH_TEST);
        glPushMatrix();
        glLoadIdentity();
        glMatrixMode(GL_PROJECTION);
        glPushMatrix();
            int w, h;
            Core_getWH(&w, &h);
            glOrtho(0, w, 0, (float)w/h, 0, 1);
            glLoadIdentity();
            glMatrixMode(GL_MODELVIEW);

            glDisable(GL_LIGHTING);
            glEnable(GL_TEXTURE_2D);

            glColor4f(1.0, 1.0, 1.0, 1.0);
            glBindTexture(GL_TEXTURE_2D, Museum_PROMPT_);
            glEnableClientState(GL_VERTEX_ARRAY);
            glEnableClientState(GL_TEXTURE_COORD_ARRAY);
            glScaled(0.2, (float)w/h * 0.05, 1.0);
            if (Core_getDEBUG()){
                glTranslatef(-2.5, 10.5, 0);
            }
            else {
                glTranslatef(-3.95, 10.5, 0);
            }
            glVertexPointer(2, GL_FLOAT, 0, vertexes);
            glTexCoordPointer(2, GL_FLOAT, 0, texcoord);
            glDrawArrays(GL_QUADS, 0, 4);
            glDisableClientState(GL_VERTEX_ARRAY);
            glDisableClientState(GL_TEXTURE_COORD_ARRAY);
            glBindTexture(GL_TEXTURE_2D, 0);

            glEnable(GL_LIGHTING);
            glDisable(GL_TEXTURE_2D);

        glMatrixMode(GL_PROJECTION);
        glPopMatrix();
        glMatrixMode(GL_MODELVIEW);
        glEnable(GL_DEPTH_TEST);

    glPopMatrix();
}

void Museum_showInfo(){
   // glActiveTexture(GL_TEXTURE25);
    Core_setTexScreen("NULL", Museum_INFOTEXTURES_[Museum_INFONOW_]);
  //  glActiveTexture(GL_TEXTURE0);
}

bool Museum_ifInRadius(double posX, double posY, double x, double y){
    if (((posX - x)*(posX-x) +  (posY - y)*(posY-y)) <= radius*radius){
            return true;
        }
    else {
            return false;
        }

}

bool Museum_ifShowInfo(){
    double x, y, z, aX, aY, aZ;
    Camera_getPosition(&x, &y, &z, &aX, &aY, &aZ);


    for (int i = 0; i < AMOUNTINFOS; ++i){
        double SphereX, SphereZ;

        SphereX = Museum_INFOPOINTS_[i][0];
        SphereZ = Museum_INFOPOINTS_[i][1];

        if (Museum_ifInRadius(SphereX, SphereZ, x, z)){
            Museum_INFONOW_ = i;
            return true;
        }

    }
    return false;
}
