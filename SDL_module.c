#include "main.h"
#define SAMPLESNUM 3

static const Uint8* KEYSTATE = NULL;
SDL_Window* WINDOW = NULL;
static SDL_GLContext* CONTEXT = NULL;
static SDL_DisplayMode DISPLAY_MODE;
static SDL_Event EVENT;

Uint8* SDLm_getKeyState(){
    /** Return SDL keystates, if NULL == keystate, exit **/
    if (NULL != KEYSTATE){
        return KEYSTATE;
    }

    printf("Error, keystate is NULL, exit 1\n");
    exit(1);
}

SDL_Event* SDLm_getEvent(){
    /** Return SDL event **/
    if (SDL_PollEvent(&EVENT))
        return &EVENT;
    return NULL;
}

void SDLm_initKeystates(){
    /** Init Keystate **/
    KEYSTATE = SDL_GetKeyboardState(NULL);
}

void SDLm_deteteContext(){
    /** Delete context **/
    SDL_GL_DeleteContext(CONTEXT);
}

void SDLm_deleteWindow(){
    /** Delete window **/
    SDL_DestroyWindow(WINDOW);
}

void SDLm_getWH(int* w, int* h){
    /** Return width & height of window **/
    *w = DISPLAY_MODE.w;
    *h = DISPLAY_MODE.h;
}

void SDLm_updateScreen(){
    /** Updates window **/
    SDL_GL_SwapWindow(WINDOW);
}

void SDLm_makeContext(){
    /** Make GL context in window **/
    SDL_GL_CreateContext(WINDOW);

    if (NULL == CONTEXT){
        printf("SDL error,  can not make context for OpenGL, exit\n");
        exit(1);
    }
}

void SDLm_init(){
    /*** Init SDL and set window attrs ***/
    if (0 != SDL_Init(SDL_INIT_EVERYTHING)){
        printf("SDL error. Can not init SDL. Try again, or write the developer");
        exit(1);
    }

    SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, 1);
    SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, SAMPLESNUM);

    WINDOW = SDL_CreateWindow("Museum", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 200, 300,
        SDL_WINDOW_SHOWN | SDL_WINDOW_FULLSCREEN_DESKTOP| SDL_WINDOW_OPENGL);

    if (NULL == WINDOW){
        printf("SDL error. Can not open window. Try again, or write the developer");
        exit(1);
    }
}
