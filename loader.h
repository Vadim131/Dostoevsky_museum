#ifndef LOADER_H_INCLUDED
#define LOADER_H_INCLUDED


FILE* openfile(char* name);
void loadAll();
void cutByIndex(char* line, char* line1, int k);
void find3nums(char* line, double* n0, double* n1, double* n2, int i);
Material loadMaterial(char* line);
void makeObj(int f, Vertex* vertexes, Normal* normals, Polygon* polygons, Texture2DCoord* textures, Vmaterial* materials, char* name, int m);
void loadObjects(char* name);
Vertex loadVertexes(char* line);
Normal loadNormals(char* line);
Texture2DCoord loadTextures(char* line);
Polygon makePolygon(Vertex* vertexes, Normal* normals, Texture2DCoord* textures, char* line, int shiftV, int shiftN, int shiftT);
char* cutBySymbol(char* line, char sym);

#endif // LOADER_H_INCLUDED
