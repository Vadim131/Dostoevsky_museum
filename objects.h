#ifndef OBJECTS_H_INCLUDED
#define OBJECTS_H_INCLUDED
void makeScene(void);
void freeScene(void);
void makeLists(void);
//void makeList(int obj);
double* makeVertexes(Triangle triangle);
double* makeNormals(Triangle triangle);
float* makeTextures(Triangle triangle);
Triangle* triangilize(Polygon polygon);
void addElemToScene(StaticObject object);
StaticObject getElemFromScene(int index);
int getlenObjArray(void);
#endif // OBJECTS_H_INCLUDED
