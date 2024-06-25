#include "main.h"
#include "camera.h"
#include "Structures.h"

static double Camera_POSX, Camera_POSY, Camera_POSZ;
static double angleX, angleY, angleZ;
static float Camera_FRAMETIME;
static float quat;

void Camera_setPos(double pos_x, double pos_y, double pos_z){
     Camera_POSX = pos_x; Camera_POSY = pos_y; Camera_POSZ = pos_z;
}

void Camera_getPosition(double* x, double* y, double* z, double* aX, double* aY, double* aZ){
    if (NULL == x);
    else *x = Camera_POSX;

    if (NULL == y);
    else *y = Camera_POSY;

    if (NULL == z);
    else *z = Camera_POSZ;

    if (NULL == aX);
    else *aX = angleX;

    if (NULL == aY);
    else *aY = angleY;

    if (NULL == aZ);
    else *aZ = angleZ;

}

void Camera_std(){
    int mouse_posX; int mouse_posY; int w; int h;

    Core_getMOUSEPOS(&mouse_posX, &mouse_posY);
    Core_getWH(&w, &h);
    Camera_FRAMETIME = Core_getFRAMETIME()/1000.0f;

    Camera_countRotation(mouse_posX, mouse_posY, w, h);

    Camera_rotate(angleX, angleY, angleZ);
    Camera_move(Camera_POSX, Camera_POSY, Camera_POSZ);

}

void Camera_RotateBack(){
    Camera_rotate(angleX, angleY, angleZ);

}

void Camera_MoveBack(){
    Camera_move(Camera_POSX, Camera_POSY, Camera_POSZ);
}

void Camera_rotate(double aX, double aY, double aZ){
    glRotated(aX, 1.0d, 0.0d, 0.0d);
    glRotated(aY, 0.0d, 1.0d, 0.0d);
    glRotated(aZ, 0.0d, 0.0d, 1.0d);

}

void Camera_countRotation(int mouse_posX, int mouse_posY, int w, int h){
    double x, y;

    x = (float)mouse_posX/w - 0.5f;
    y = (float)mouse_posY/h - 0.5f;

    if (x >= -0.1 && x <= 0.1 && y >= -0.15 && y <= 0.15) return;

    angleY += (double)RotAnglePerS*x*Camera_FRAMETIME;
    if (angleY <= -360) angleY += 360;
    if (angleY >= 360) angleY -= 360;

    angleX += (double)RotAnglePerS*y*Camera_FRAMETIME;
    if (angleX <= -60) angleX = -60;
    if (angleX >= 60) angleX = 60;

}

void Camera_move(double pos_x, double pos_y, double pos_z){
    glTranslated(pos_x, pos_y, pos_z);

}

void Camera_countMoving(char vect){
    switch (vect){
        case 'w':
            Camera_POSX += (double)PlayerSpeedPerS *Camera_FRAMETIME * -cos((90-angleY)*M_PI/180);
            Camera_POSZ += (double)PlayerSpeedPerS *Camera_FRAMETIME * sin((90-angleY)*M_PI/180);
            break;
        case 's':
            Camera_POSX -= (double)PlayerSpeedPerS *Camera_FRAMETIME * -cos((90-angleY)*M_PI/180);
            Camera_POSZ -= (double)PlayerSpeedPerS *Camera_FRAMETIME * sin((90-angleY)*M_PI/180);
            break;
        case 'a':
            Camera_POSZ -= (double)PlayerSpeedPerS *Camera_FRAMETIME * -cos((90-angleY)*M_PI/180);
            Camera_POSX += (double)PlayerSpeedPerS *Camera_FRAMETIME * sin((90-angleY)*M_PI/180);
            break;
        case 'd':
            Camera_POSZ += (double)PlayerSpeedPerS *Camera_FRAMETIME * -cos((90-angleY)*M_PI/180);
            Camera_POSX -= (double)PlayerSpeedPerS *Camera_FRAMETIME * sin((90-angleY)*M_PI/180);
            break;

        default:
            break;
    }
}
