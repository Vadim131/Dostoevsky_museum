#include "main.h"
#include "objects.h"
#include "camera.h"
#include "render.h"
#include "loader.h"
#include "textures.h"
#include "Structures.h"
#include "museum.h"

/** This variables are global in core,
    and the are funcs, that can give other modules their values **/
static bool Core_RUNNING;
static int Core_FPS;
static int Core_W, Core_H;
static float Core_ASPECT;
static int Core_X_MOUSEPOS, Core_Y_MOUSEPOS;
static int Core_FRAMETIME;
static bool Core_DEBUG;

/** This variables are global in core,
    but other modules can not get them or their values **/
static const Uint8* Core_SDL_KEYSTATE_ = NULL;
static SDL_Window* Core_SDL_WIN_ = NULL;
static SDL_GLContext* Core_SDL_CONTEXT_ = NULL;
/* Non pointer */
static SDL_Event Core_SDL_EVENT_;
static SDL_DisplayMode Core_SDL_MODE_;

/** Defines **/
#define NUMOFSAMPLES 3
#define STARTPOS -0.5f, -1.4, -1.4f
#define STDTEXSCREENPATH "./textures/GreetingScreen.png"


bool Core_getRUNNUNG(){
    /** returns value of Core_RUNNING **/
    return Core_RUNNING;
}

bool Core_getDEBUG(){
    return Core_DEBUG;
}

void Core_getMOUSEPOS(int* x, int* y){
    SDL_GetMouseState(&Core_X_MOUSEPOS, &Core_Y_MOUSEPOS);
    *x = Core_X_MOUSEPOS; *y = Core_Y_MOUSEPOS;
}

int Core_getFPS(){
    /** returns value of Core_FPS **/
    return Core_FPS;
}

int Core_getFRAMETIME(){
    return Core_FRAMETIME;
}

void Core_getWH(int* w, int* h){
    /** gives values of Core_W & Core_H. If there are no of them, exit **/
    if (0 == Core_W || 0 == Core_H){

        if (0 != SDL_GetCurrentDisplayMode(0, &Core_SDL_MODE_)){
            printf("Window is not specified or SDL error\n");
            exit(1);
        }
        else {
            Core_W = Core_SDL_MODE_.w;
            Core_H = Core_SDL_MODE_.h;
        }
    }

    if (NULL != w) *w = Core_W;
    if (NULL != h) *h = Core_H;
}

float Core_getASPECT(){
    /** returns value of Core_ASPECT **/
    if (0 == Core_ASPECT){
        int w, h;
        Core_getWH(&w, &h);
        Core_ASPECT = (float)w/h;
    }
    return Core_ASPECT;
}

void Core_initSDL(){
    /*** Init SDL and set window attrs ***/
    if (0 != SDL_Init(SDL_INIT_EVERYTHING)){
        printf("SDL error. Can not init SDL. Try again, or write the developer");
        exit(1);
    }
}

void Core_makeWINDOW(){
    /** Makes window with special consts and params **/
    SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 4);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 4);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 4);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 4);

    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, 1);
    SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, NUMOFSAMPLES);

    Core_SDL_WIN_ = SDL_CreateWindow("Museum", SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED, SDL_WINDOW_MAXIMIZED, SDL_WINDOW_MAXIMIZED,
            SDL_WINDOW_SHOWN | SDL_WINDOW_FULLSCREEN_DESKTOP| SDL_WINDOW_OPENGL);

    if (NULL == Core_SDL_WIN_){
        printf("SDL error. Can not open window. Try again, or write the developer\n");
        exit(1);
    }
}

void Core_makeGL_CONTEXT(){
    if (NULL == Core_SDL_WIN_){
        printf("No window to make context, exit\n");
    }
    Core_SDL_CONTEXT_ = SDL_GL_CreateContext(Core_SDL_WIN_);

}

void Core_makeKEYSTATE(){
    Core_SDL_KEYSTATE_ = SDL_GetKeyboardState(NULL);
}

void Core_swapWin(){
    if (NULL == Core_SDL_WIN_){
        printf("No window to swap\n");
        exit(1);
    }
    SDL_GL_SwapWindow(Core_SDL_WIN_);
}

void Core_setTexScreen(char* path, GLuint indifier){
    float vertexes[] = {-1.0,-1.0,  1.0,-1.0,  1.0,1.0,  -1.0, 1.0};
    float texcoord[] = {0.0, 1.0,  1.0, 1.0,  1.0, 0.0,  0.0, 0.0};

    GLuint pTex = indifier;
    if (indifier == 0){
        loadStdTexture(&pTex, path);
    }

    glPushMatrix();
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glOrtho(0, Core_W, 0, (float)Core_W/Core_H, 0, 1);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    bool Enter = 0;
    glEnable(GL_TEXTURE_2D);
    glDisable(GL_LIGHTING);

    while (!Enter){
         while (SDL_PollEvent(&Core_SDL_EVENT_)){
            switch(Core_SDL_EVENT_.type){
                case SDL_QUIT:
                    exit(0);
                    break;
                case SDL_KEYDOWN:
                    switch(Core_SDL_EVENT_.key.keysym.scancode){
                        case SDL_SCANCODE_ESCAPE:
                            //TODO exit
                            exit(0);
                            break;
                        case SDL_SCANCODE_RETURN:
                            Enter = 1;
                        default:
                            break;
                    }
                }
            }
        glBindTexture(GL_TEXTURE_2D, pTex);
        glColor4f(1.0, 1.0, 1.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glEnableClientState(GL_VERTEX_ARRAY);
        glEnableClientState(GL_TEXTURE_COORD_ARRAY);
            glVertexPointer(2, GL_FLOAT, 0, vertexes);
            glTexCoordPointer(2, GL_FLOAT, 0, texcoord);
            glDrawArrays(GL_QUADS, 0, 4);
        glDisableClientState(GL_VERTEX_ARRAY);
        glDisableClientState(GL_TEXTURE_COORD_ARRAY);
        Core_swapWin();
        }
    glBindTexture(GL_TEXTURE_2D, 0);
    glEnable(GL_LIGHTING);

    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);

    glPopMatrix();

    if (indifier == 0){
        glDeleteTextures(1, &pTex);
    }



}

void Core_loadingScreen(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glDisable(GL_LIGHTING);

    float vertexes[] = {-1.0,-1.0,  1.0,-1.0,  1.0,1.0,  -1.0, 1.0};
    float texcoord[] = {0.0, 1.0,  1.0, 1.0,  1.0, 0.0,  0.0, 0.0};

    glPushMatrix();
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glOrtho(0, Core_W, 0, (float)Core_W/Core_H, 0, 1);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    GLuint pTex;
    loadStdTexture(&pTex, "./textures/LoadingScreen.png");
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, pTex);
    glColor3f(1.0, 1.0, 1.0);

    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
        glVertexPointer(2, GL_FLOAT, 0, vertexes);
        glTexCoordPointer(2, GL_FLOAT, 0, texcoord);
        glDrawArrays(GL_QUADS, 0, 4);
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);

    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);
    glDeleteTextures(1, &pTex);

    Core_swapWin();
    glEnable(GL_LIGHTING);

    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);

    glPopMatrix();

}

void Core_BaseGLEnable(){
    gladLoadGL();
    glClearColor(ClearColor);
    glEnable(GL_DEPTH_TEST);
    glClear(GL_DEPTH_BUFFER_BIT);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_NORMALIZE);
    glEnable(GL_LIGHTING);
    glEnable(GL_MULTISAMPLE);
    glEnable(GL_BLEND);
   // glEnable(GL_DITHER);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

void Core_SetMatrix(float aspect){
    glMatrixMode(GL_PROJECTION);
    gluPerspective(FOV, aspect, 0.01f, PlayerViewL);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void Core_Mainloop(){
    Core_RUNNING = 1;

    Uint32 timeForFrame0;
    long int FPStime0;
    int FPS_counter = 0;
    FPStime0 = time(NULL);

    while (Core_RUNNING){

        FPStime0 = time(NULL);
        timeForFrame0 = SDL_GetTicks();

        while (SDL_PollEvent(&Core_SDL_EVENT_)){
            switch(Core_SDL_EVENT_.type){
                case SDL_QUIT:
                    Core_RUNNING = 0;
                    break;
                case SDL_KEYDOWN:
                    switch(Core_SDL_EVENT_.key.keysym.scancode){// Какая?
                        case SDL_SCANCODE_ESCAPE:
                            Core_RUNNING = 0;
                            break;
                        case SDL_SCANCODE_P:
                            Core_DEBUG = Core_DEBUG == 0;
                            break;

                        case SDL_SCANCODE_I:
                            if(Museum_ifShowInfo()){
                                Museum_showInfo();
                            }
                            break;
                        default:
                            break;
                    }
                    break;

                case SDL_MOUSEBUTTONDOWN:
                    ;
                }
            }

        glClear(GL_DEPTH_BUFFER_BIT);
        Render_All();
        /** if conditions **/
        if (Core_DEBUG){
            Render_drawDEBAG(Core_FPS);
        }

        if (Museum_ifShowInfo()){
            Museum_showPrompt();
        }

        Core_swapWin();
        Core_FRAMETIME = SDL_GetTicks() - timeForFrame0;

        if (Core_SDL_KEYSTATE_[SDL_SCANCODE_W]){
                Camera_countMoving('w');
                }
        else if (Core_SDL_KEYSTATE_[SDL_SCANCODE_S]){
                Camera_countMoving('s');
                }

        else if (Core_SDL_KEYSTATE_[SDL_SCANCODE_D]){
                Camera_countMoving('d');
                }
        else if (Core_SDL_KEYSTATE_[SDL_SCANCODE_A]){
                Camera_countMoving('a');
                }
        glLoadIdentity();
        Camera_std();

        FPS_counter++;
        if (time(NULL) > FPStime0){
            FPStime0 = time(NULL);
            Core_FPS = FPS_counter;
            FPS_counter = 0;
        }

    }

}

int main(int args, char* argv[]){

    Core_initSDL();
    Core_makeWINDOW();
    Core_makeGL_CONTEXT();
    Core_makeKEYSTATE();

    Core_getASPECT();
    Core_getWH(NULL, NULL);

    Core_BaseGLEnable();
    Core_SetMatrix(Core_ASPECT);
    Core_loadingScreen();
    makeScene();
    loadAll();
    makeLists();
    PreRender_makeDispList();
    Camera_setPos(STARTPOS);
    Museum_loadTextures();
    Render_setLight();
    Objects_freeObjParams();
    Core_setTexScreen(STDTEXSCREENPATH, 0);
    Core_Mainloop(Core_SDL_WIN_, Core_W, Core_H);
    freeScene();
    SDL_GL_DeleteContext(Core_SDL_CONTEXT_);
    SDL_DestroyWindow(Core_SDL_WIN_);

    SDL_Quit();
    return 0;

}
