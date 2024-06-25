#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include "./glad/glad.h"
#include "./glad/khrplatform.h"
#include <GL/glu.h>
#include "Structures.h"

void mainloop();
void setGL(float aspect);
void makePlayer(void);
void BaseGLEnable();
void SetMatrix(float aspect);
void getWinWH(int* w, int* h);


/* MACROS */
#define FOV 45.0f
#define PlayerViewL 300.0f
#define RotAnglePerS 190
#define PlayerSpeedPerS 1.0f
#define ClearColor 0.5f, 0.7f, 1.0f, 1.0f

#endif // MAIN_H_INCLUDED
