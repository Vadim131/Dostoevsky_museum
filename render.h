#ifndef RENDER_H_INCLUDED
#define RENDER_H_INCLUDED
void render(void);
void statObjRender(void);
void makeLight(void);
void drawLight(void);
void drawFPS(int fps);
void print_string(float x, float y, char *text);
void makeLightMap();

#endif // RENDER_H_INCLUDED
/*

    //make shadows
    int w, h;

    getWinWH(&w, &h);
    GLfloat lightpos[] = {LIGHTPOSITION};
    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    gluPerspective(90.0, (float)w/h, 0.1, 100);
    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glLoadIdentity();
    gluLookAt(0, 0, 0, 0, 0, 0, 0, 0, 0);
        statObjRender();

    glPopMatrix();

    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);

    glCopyTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, 0, 0, w, h, 0);

    glViewport(0, 0, w, h);

    GLfloat tmpMatrix[16];

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.5, 0.5, 0.0);
    glScalef(0.5, 0.5, 1.0);
    gluPerspective(90.0, (float)w/h, 0.1, 100);
    gluLookAt(0, 0, 0, 0, 0, 0, 0, 0, 0);
    glGetFloatv(GL_MODELVIEW, tmpMatrix);
    glPopMatrix();

    //glLoadTransposeMatrixf(&tmpMatrix);

   /* glTexGeni(GL_S, GL_TEXTURE_GEN_MODE, GL_OBJECT_LINEAR);
    glTexGeni(GL_T, GL_TEXTURE_GEN_MODE, GL_OBJECT_LINEAR);
    glTexGeni(GL_R, GL_TEXTURE_GEN_MODE, GL_OBJECT_LINEAR);
    glTexGeni(GL_Q, GL_TEXTURE_GEN_MODE, GL_OBJECT_LINEAR);

    glTexGenfv(GL_S, GL_OBJECT_PLANE, &tmpMatrix[0]);
    glTexGenfv(GL_T, GL_OBJECT_PLANE, &tmpMatrix[4]);
    glTexGenfv(GL_R, GL_OBJECT_PLANE, &tmpMatrix[8]);
    glTexGenfv(GL_Q, GL_OBJECT_PLANE, &tmpMatrix[12]);

    glEnable(GL_TEXTURE_GEN_S);
    glEnable(GL_TEXTURE_GEN_T);
    glEnable(GL_TEXTURE_GEN_R);
    glEnable(GL_TEXTURE_GEN_Q);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_COMPARE_FUNC, GL_LEQUAL);
    glTexParameteri(GL_TEXTURE_2D, GL_DEPTH_TEXTURE_MODE, GL_LUMINANCE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_COMPARE_MODE, GL_COMPARE_R_TO_TEXTURE);
    glEnable(GL_TEXTURE_2D);*/
