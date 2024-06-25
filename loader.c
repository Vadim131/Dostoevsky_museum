#include "main.h"
#include "objects.h"
#include "loader.h"
#include "textures.h"
#include "Structures.h"

#define FILENAMEOBJ "./museum.obj"
#define FILENAMEMTL "./museum.mtl"

void loadAll(){

    loadObjects(FILENAMEOBJ);
    loadSkyBox();
}

FILE* openfile(char* name){

    FILE* file = fopen(name, "r");

    if (NULL == file){
        printf("Can not open %s", name);
        exit(-1);
    }

    return file;

}

void makeObj(int f, Vertex* vertexes, Normal* normals, Polygon* polygons, Texture2DCoord* textures, Vmaterial* materials, char* name, int m){
    StaticObject object;
    object.lenPolygons = f;
    object.pPolygons = polygons;
    object.vMaterials = materials;
    object.lenMaterials = m;
    object.name = name;
    addElemToScene(object);

    free(vertexes);
    free(normals);
    free(textures);

}

void loadObjects(char* name){
    FILE* file = openfile(name);

    int shiftV = 0;
    int shiftN = 0;
    int shiftT = 0;

    char line[10000];
    Material material;

    Vertex* vertexes = NULL;
    Normal* normals = NULL;
    Polygon* polygons = NULL;
    Texture2DCoord* textures = NULL;
    Vmaterial* materials = NULL;
    char* Objname = NULL;

    int v = 0; // vertexes
    int n = 0; // normals
    int t = 0; // textures
    int f = 0; // polygons
    int m = 0; // materials (amount)

    while (1){
        if (fgets(line, 10000, file) == NULL){

            if (NULL != polygons){
                makeObj(f, vertexes, normals, polygons, textures, materials, Objname, m);
            }
            break;

        }

        if (line[0] == '#' || line[0] == 'm') continue;

        if (line[0] == 'o'){

            if (NULL != polygons){
                makeObj(f, vertexes, normals, polygons, textures, materials, Objname, m);
                polygons = NULL; vertexes = NULL; normals = NULL; materials = NULL; textures = NULL, Objname = NULL;
                shiftV += v;
                shiftN += n;
                shiftT += t;
                v = 0; n = 0; f = 0; m = 0; t = 0;
            }
            Objname = (char*)realloc(Objname, sizeof(char)*strlen(line));
            cutByIndex(line, Objname, 2);

        }

        if (line[0] == 'v' && line[1] == ' '){

                ++v;
                vertexes = (Vertex*)realloc(vertexes, v*sizeof(Vertex));
                if (NULL == vertexes) exit(1);
                vertexes[v-1] = loadVertexes(line);

            }
        else if (line[0] == 'v' && line[1] == 'n'){

                ++n;
                normals = (Normal*)realloc(normals, n*sizeof(Normal));
                if (NULL == normals) exit(1);
                normals[n-1] = loadNormals(line);

            }

         else if (line[0] == 'v' && line[1] == 't'){

                ++t;
                textures = (Texture2DCoord*)realloc(textures, t*sizeof(Texture2DCoord));
                if (NULL == textures) exit(1);
                textures[t-1] = loadTextures(line);
            }

        else if (line[0] == 'f'){

                ++f;
                polygons = (Polygon*)realloc(polygons, f*sizeof(Polygon));
                if (NULL == polygons) exit(1);
                polygons[f-1] = makePolygon(vertexes, normals, textures, line, shiftV, shiftN, shiftT);

                }
        else if (line[0] == 'u'){

            ++m;
            materials = (Vmaterial*)realloc(materials, m*sizeof(Vmaterial));
            if (NULL == materials) exit(1);
            Vmaterial vmaterial;
            material = loadMaterial(line);
            vmaterial.vertexNum = f;
            vmaterial.material = material;

            materials[m-1] = vmaterial;

        }
    }
    fclose(file);
}

void cutByIndex(char* line, char* line1, int k){
    for (int i = 0; i < strlen(line); ++i){
        line1[i] = line[i + k]; //"usemtl " = 7 characters
     }
}

void find3nums(char* line, double* n0, double* n1, double* n2, int i){
    char templine[100000];

    for (int T_i = 0; line[i] != ' '; ++i){
        templine[T_i] = line[i];
        ++T_i;
    } ++i;
    *n0 = atof(templine);

    for (int T_i = 0; line[i] != ' '; ++i){
        templine[T_i] = line[i];
        ++T_i;
    } ++i;
    *n1 = atof(templine);

    for (int T_i = 0; i < strlen(line); ++i){
        templine[T_i] = line[i];
        ++T_i;
    } ++i;
    *n2 = atof(templine);
}

Material makeMaterial(FILE* file){
    char line[1000];
    char t_line[1000];
    Material material;
    Texture2D texture;
    texture.numOfBuff = 0;
    texture.path = " ";
    material.texture = texture;

    double n0, n1, n2;
    float* array1 = (float*)malloc(4 * sizeof(float));
    float* array2 = (float*)malloc(4 * sizeof(float));
    float* array3 = (float*)malloc(4 * sizeof(float));

    if (NULL == array1 || NULL == array2 || NULL == array3) exit(1);

    array1[3] = 1.0f; array2[3] = 1.0f; array3[3] = 1.0f;

    while (fgets(line, 1000, file) != NULL){

        if (line[0]  == 'n') break;

        if (line[0] == 'd'){
            cutByIndex(line, t_line, 1);
            material.opacity = atof(t_line);
           // printf("%f\n", material.opacity);
            array1[3] = material.opacity;
            array2[3] = material.opacity;
            array3[3] = material.opacity;
            // прозрачность
        }

        else if (line[0] == 'N'){
            if (line[1] == 's'){
                cutByIndex(line, t_line, 3);
                material.M_sh = atof(t_line);

            }
        }

        else if (line[0] == 'K'){
            if (line[1] == 'a'){

                find3nums(line, &n0, &n1, &n2, 3);
                array1[0] = n0; array1[1] = n1; array1[2] = n2;
                material.M_amb = array1;

            }
            else if (line[1] == 'd'){

                find3nums(line, &n0, &n1, &n2, 3);
                array2[0] = n0; array2[1] = n1; array2[2] = n2;

                material.M_diff = array2;

            }
            else if (line[1] == 's'){
                // Цвет блика
                find3nums(line, &n0, &n1, &n2, 3);
                array3[0] = n0; array3[1] = n1; array3[2] = n2;

                material.M_spec = array3;

            }
        }

        else if (line[0] == 'm'){
            if (line[4] == 'K'){
                cutByIndex(line, t_line, 7);

                char sline[1000];

                sprintf(sline, "%s%s", "./", t_line);
                int len = strlen(sline);
                sline[len - 1] = '\0';

                glActiveTexture(GL_TEXTURE0);
                loadStdTexture(&texture.numOfBuff, sline);
                texture.path = sline;

                material.texture = texture;
            }
        }

    }
    fclose(file);



    return material;
}

Material loadMaterial(char* line){
    char name[1000];
    char m_line[1000];
    char m_name[1000];

    FILE* file = openfile(FILENAMEMTL);

    cutByIndex(line, name, 7);

    while (1){
        if (fgets(m_line, 1000, file) == NULL)
            break;

        if (m_line[0] == 'n'){
            cutByIndex(m_line, m_name, 7);

        }
        else continue;

        if (strcmp(m_name, name) == 0){
            return makeMaterial(file);
        }

     }
    fclose(file);
    //return standart material
    float* array1 = (float*)malloc(4 * sizeof(float));
    float* array2 = (float*)malloc(4 * sizeof(float));
    float* array3 = (float*)malloc(4 * sizeof(float));

    array1[0] = 0.5f; array1[1] = 0.5f; array1[2] = 0.5f; array1[3] = 1.0f;
    array2[0] = 0.5f; array2[1] = 0.5f; array2[2] = 0.5f; array2[3] = 1.0f;
    array3[0] = 0.0f; array3[1] = 0.0f; array3[2] = 0.0f; array3[3] = 1.0f;

    Material material;
    material.M_amb = array1;
    material.M_diff = array2;
    material.M_spec = array3;
    material.M_sh = 0.0f;
    material.opacity = 1.0;
    Texture2D texture = {0, " "};
    material.texture = texture;

    return material;
}

Texture2DCoord loadTextures(char* line){
    char templine[10000];
    float t0, t1;
    cutByIndex(line, templine, 3);
    t0 = atof(templine);

    char* line1 = cutBySymbol(templine, ' ');
    t1 = atof(line1);
    Texture2DCoord texture = {t0, t1};

    return texture;
}

Vertex loadVertexes(char* line){
    double v0, v1, v2;

    find3nums(line, &v0, &v1, &v2, 2);
    Vertex vertex = {v0, v1, v2};

    return vertex;

}

Normal loadNormals(char* line){
    double n0, n1, n2;

    find3nums(line, &n0, &n1, &n2, 3);
    Normal normal = {n0, n1, n2};

    return normal;
}

char* cutBySymbol(char* line, char sym){
    int placeSym = 0;

    for (int i = 0; i < strlen(line); ++i){
        if (line[i] == sym){placeSym = i+1; break;}
    }
    char sign;
    for (int i = placeSym; i <= strlen(line); ++i){
        sign = line[i];
        line[i - placeSym] = sign;
    }

    return line;
}

Polygon makePolygon(Vertex* vertexes, Normal* normals, Texture2DCoord* textures, char* line, int shiftV, int shiftN, int shiftT){

    int spaces = 0;
    for (int i = 0; i < strlen(line); ++i){
        if (line[i] == ' ') ++spaces;
    }
    char sign;
    for (int i = 1; i <= strlen(line); ++i){
        sign = line[i];
        line[i - 1] = sign;
    }
    Vertex* pVertexes = (Vertex*)malloc(spaces*sizeof(Vertex));
    Normal* pNormals = (Normal*)malloc(spaces*sizeof(Normal));
    Texture2DCoord* pTextures = NULL;

    if (NULL != textures){
        pTextures = (Texture2DCoord*)malloc(spaces*sizeof(Texture2DCoord));
        if (NULL == textures) exit(1);
    }

    if (NULL == pVertexes || NULL == pNormals) exit(1);

    int v, n, t;
    for (int i = 0; i < spaces; ++i){
        line = cutBySymbol(line, ' ');

        v = atoi(line);
        pVertexes[i] = vertexes[v-1-shiftV];

        line = cutBySymbol(line, '/');

        if (NULL != textures){
           t = atoi(line);

           pTextures[i] = textures[t-1-shiftT];
        }
        line = cutBySymbol(line, '/');
        n = atoi(line);

        pNormals[i] = normals[n-1-shiftN];

    }

    Polygon polygon;
    polygon.selfLen = spaces;
    polygon.textures = pTextures;
    polygon.vertexes = pVertexes;
    polygon.normals = pNormals;

    return polygon;
}
