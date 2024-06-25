#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

typedef struct Vertexes {
    double x;
    double y;
    double z;
} Vertex;

typedef struct Normals {
    double x;
    double y;
    double z;
} Normal;

typedef struct Texture2DCoords {
    float x;
    float y;
} Texture2DCoord;

typedef struct Texture2Ds {
    GLuint numOfBuff;
    char* path;

} Texture2D;

typedef struct Triangles {
    Vertex* vertexes;
    Normal* normals;
    Texture2DCoord* textures;

} Triangle;

typedef struct Polygons {
    int selfLen;
    Vertex* vertexes;
    Normal* normals;
    Texture2DCoord* textures;

} Polygon;

typedef struct Materials {
    float* M_amb;
    float* M_diff;
    float M_sh;
    float* M_spec;
    float opacity;
    Texture2D texture;

} Material;

typedef struct VertexMaterials {
    int vertexNum;
    Material material;

} Vmaterial;

typedef struct StaticObjects {
    char* name;
    int lenPolygons;
    int lenMaterials;
    GLuint numOfList;
    Polygon* pPolygons;
    Vmaterial* vMaterials;

} StaticObject;


#endif // STRUCTURES_H_INCLUDED
