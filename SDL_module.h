#ifndef SDL_MODULE_H_INCLUDED
#define SDL_MODULE_H_INCLUDED

SDL_Event* SDLm_getEvent();
void SDLm_getWH(int* w, int* h);
void SDLm_init();
void SDLm_makeContext();
void SDLm_updateScreen();
void SDLm_deteteContext();
void SDLm_deleteWindow();


#endif // SDL_MODULE_H_INCLUDED
