#ifndef TEXTURES_H_INCLUDED
#define TEXTURES_H_INCLUDED

void makeSkybox();
void loadSkyBoxTex(char* name[6], GLuint* texture);
void loadSkyBox();
void loadStdTexture(GLuint* p, char* path);


#endif // TEXTURES_H_INCLUDED
