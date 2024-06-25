
#ifndef CAMERA_H_INCLUDED
#define CAMERA_H_INCLUDED
void getPosition(double* x, double* y, double* z, double* aX, double* aY, double* aZ);
void Camera_std();
void Camera_rotate(double aX, double aY, double aZ);
void Camera_countRotation(int mouse_posX, int mouse_posY, int w, int h);
void Camera_countMoving(char vect);
void Camera_move(double pos_x, double pos_y, double pos_z);
void Camera_RotateBack();
void Camera_setPos(double pos_x, double pos_y, double pos_z);
void Camera_setAngl(double angleX, double angleY, double angleZ);
void Camera_MoveBack();
#endif // CAMERA_H_INCLUDED
