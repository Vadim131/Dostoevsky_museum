#include "main.h"
#include "loader.h"
#include "objects.h"
#include "render.h"
#include "Structures.h"
#include "textures.h"
#define STARTOBJARRAYSIZE 200
#define CULL_FACE_OBJLEN 16
#define SAME_OBJECTSLEN 1


char Obj_CULLFACEONNAMES[CULL_FACE_OBJLEN][1000] =
{
   "Pattern2D_3812.001_Mesh.001\n",
   "Стол_art&moble.002\n",
   "Стул__233.001\n",
   "Стул_у_стены_233.002\n",
   "Стол_у_дивана_Verda_Table.001\n",
   "door_econom3_Mesh.001\n",
   "sve4a_002.002_Mesh.001\n",
   "sve4a_002.001_Mesh.001\n",
   "Tube005_Mesh.001\n",
   "Столик_с_часами_base.001\n",
   "Куб\n",
   "Windows_Königsberg_big__Mesh.001\n",
   "Windows_Königsberg_big_.001_Mesh.001\n",
   "Romano_Home_Olivia_etajerka_grand.002\n",
   "Cube_Cube.001\n",
   "Диван_Cube.001\n",
};

char Obj_SAMEOBJNAMES[SAME_OBJECTSLEN][1000] =
{
   "Pattern2D_3812.001_Mesh.001\n",
};

float Obj_SAMEOBJCOORDS[SAME_OBJECTSLEN][6] =
{       /** pos      angle  **/
    {0.0, 0.0, 1.76,  0.0, 0.0, 0.0},
};


StaticObject* ObjectsArray;
int lenObjectsArray;
int sizeObjarray;

int getlenObjArray(){
    return lenObjectsArray;
}

void addElemToScene(StaticObject object){
    lenObjectsArray++;
    if (lenObjectsArray >= sizeObjarray){
        sizeObjarray*=2;
        ObjectsArray = (StaticObject*)realloc(ObjectsArray, sizeof(StaticObject) * sizeObjarray);

    }
    ObjectsArray[lenObjectsArray-1] = object;
}

StaticObject getElemFromScene(int index){
    if (index >= lenObjectsArray){
        printf("Invalid index, exit\n");
        exit(1);
    }

    return ObjectsArray[index];

}

void makeScene(){
    ObjectsArray = (StaticObject*)malloc(sizeof(StaticObject) * STARTOBJARRAYSIZE);

    if (NULL == ObjectsArray){
        printf("Can not allocate memory. Make sure, you have enough memory, or try again.\nIf you have the same, write to developer");
        exit(-1);
    }
    lenObjectsArray = 0;
    sizeObjarray = STARTOBJARRAYSIZE;
}

Normal normalize(Normal normalvec){


    Normal Newnormalvec;
    float length = sqrt(normalvec.x*normalvec.x + normalvec.y*normalvec.y + normalvec.z*normalvec.z);

    Newnormalvec.x = normalvec.x/length;
    Newnormalvec.y = normalvec.y/length;
    Newnormalvec.z = normalvec.z/length;

    return Newnormalvec;
}

Triangle* triangilize(Polygon polygon){
    Triangle* triangles = (Triangle*)malloc(sizeof(Triangle) * (polygon.selfLen - 2));
    if (NULL == triangles) exit(1);

    int start = 0;
    int last = start+1;
    int k;

    for (int i = 0; i < polygon.selfLen - 2; ++i){
        Triangle triangle_;
        Vertex* v = (Vertex*)malloc(3 * sizeof(Vertex));
        Normal* n = (Normal*)malloc(3 * sizeof(Normal));
        Texture2DCoord* t = NULL;

        if (NULL != polygon.textures){
            t = (Texture2DCoord*)malloc(3 * sizeof(Texture2DCoord));}

        for (int tr = 0; tr < 3; ++tr){
            if (tr == 0) k = start;
            else if (tr == 1) k = last;
            else if (tr == 2) k = ++last;

            v[tr] = polygon.vertexes[k];
            n[tr] = polygon.normals[k];
            if (polygon.textures != NULL)
                t[tr] = polygon.textures[k];
        }

        triangle_.vertexes = v;
        triangle_.normals = n;
        triangle_.textures = t;

        triangles[i] = triangle_;
        }
    return triangles;
}

double* makeVertexes(Triangle triangle){
    double* v = (double*)malloc(9 * sizeof(double));
    if (NULL == v) exit(1);

    for (int i = 0; i < 3; ++i){

        v[i*3] = triangle.vertexes[i].x;
        v[i*3 + 1] = triangle.vertexes[i].y;
        v[i*3 + 2] = triangle.vertexes[i].z;
    }

    return v;
}

double* makeNormals(Triangle triangle){
    double* n = (double*)malloc(9 * sizeof(double));
    if (NULL == n) exit(1);

    for (int i = 0; i < 3; ++i){

        n[i*3] = triangle.normals[i].x;
        n[i*3 + 1] = triangle.normals[i].y;
        n[i*3 + 2] = triangle.normals[i].z;
    }

    return n;
}

float* makeTextures(Triangle triangle){
    if (NULL == triangle.textures){
        return NULL;
    }

    float* t = (float*)malloc(6 * sizeof(float));
    if (NULL == t) exit(1);

    for (int i = 0; i < 3; ++i){

        t[i*2] = triangle.textures[i].x;
        triangle.textures[i].y = 1 - triangle.textures[i].y;
        t[i*2 + 1] = triangle.textures[i].y;


    }

    return t;

}

void Objects_drawGlass(){

    for (int obj = 0; obj < lenObjectsArray; ++obj){
        int Mcounter = 0;
        bool Tex = 0;
        float opacitynow;

        glBindTexture(GL_TEXTURE_2D, 0);
        for (int i = 0; i < ObjectsArray[obj].lenPolygons; ++i){
            if (i == ObjectsArray[obj].vMaterials[Mcounter].vertexNum){
                opacitynow = ObjectsArray[obj].vMaterials[Mcounter].material.opacity;
                glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ObjectsArray[obj].vMaterials[Mcounter].material.M_amb);
                glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, ObjectsArray[obj].vMaterials[Mcounter].material.M_diff);
                glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, ObjectsArray[obj].vMaterials[Mcounter].material.M_spec);
                glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, ObjectsArray[obj].vMaterials[Mcounter].material.M_sh/10);

                if (ObjectsArray[obj].lenMaterials > Mcounter + 1){
                    Mcounter++;
                }
            }
            if (opacitynow == 1.0 || opacitynow == 0.0){
                continue;
            }

            Triangle* triangles = NULL;
            triangles = triangilize(ObjectsArray[obj].pPolygons[i]);


            for (int tr = 0; tr < ObjectsArray[obj].pPolygons[i].selfLen-2; ++tr){
                double* vertexes = makeVertexes(triangles[tr]);
                double* normals = makeNormals(triangles[tr]);
                float* textures = makeTextures(triangles[tr]);

                glVertexPointer(3, GL_DOUBLE, 0, vertexes);
                glNormalPointer(GL_DOUBLE, 0, normals);


                if (ObjectsArray[obj].vMaterials[Mcounter].material.texture.numOfBuff != 0 && NULL != textures){
                    glTexCoordPointer(2, GL_FLOAT, 0, textures);
                }
                else {
                    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
                }


                glDrawArrays(GL_TRIANGLES, 0, 3);

                free(vertexes);
                free(normals);
                free(textures);
            }
            free(triangles);

        }
    }

}

void ObjectsSpecial_statObj(){
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_NORMAL_ARRAY);

    for (int obj = 0; obj < lenObjectsArray; ++obj){

        for (int i = 0; i < ObjectsArray[obj].lenPolygons; ++i){
            Triangle* triangles = NULL;
            triangles = triangilize(ObjectsArray[obj].pPolygons[i]);
            glEnable        ( GL_POLYGON_OFFSET_FILL );
            float bias, bias0;
            float lx, ly, lz;
            Render_getLightPos(&lx, &ly, &lz);
            Normal lightnormal;
            lightnormal.x = lx;
            lightnormal.y = ly;
            lightnormal.z = lz;
            lightnormal = normalize(lightnormal);


            Normal Objnormal = normalize(ObjectsArray[obj].pPolygons[i].normals[0]);

            bias0 = 1 - (Objnormal.x * lightnormal.x + Objnormal.y * lightnormal.y + Objnormal.z * lightnormal.z);
            bias = 1 - (-Objnormal.x * lightnormal.x + -Objnormal.y * lightnormal.y + -Objnormal.z * lightnormal.z);

            if (bias0 > bias) bias = bias0;

            glPolygonOffset ( bias+0.1, 0.0 );


            for (int tr = 0; tr < ObjectsArray[obj].pPolygons[i].selfLen-2; ++tr){

                double* vertexes = makeVertexes(triangles[tr]);
                double* normals = makeNormals(triangles[tr]);

                    glVertexPointer(3, GL_DOUBLE, 0, vertexes);
                    glNormalPointer(GL_DOUBLE, 0, normals);

                    glDrawArrays(GL_TRIANGLES, 0, 3);

                    free(vertexes);
                    free(normals);
                }
                free(triangles);
        }

    }
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisableClientState(GL_NORMAL_ARRAY);

}

void makeList(int obj){
        int Mcounter = 0;
        bool Tex = 0;
        float opacitynow;

        glBindTexture(GL_TEXTURE_2D, 0);
        for (int i = 0; i < ObjectsArray[obj].lenPolygons; ++i){
            if (i == ObjectsArray[obj].vMaterials[Mcounter].vertexNum){
                opacitynow = ObjectsArray[obj].vMaterials[Mcounter].material.opacity;
                glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ObjectsArray[obj].vMaterials[Mcounter].material.M_amb);
                glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, ObjectsArray[obj].vMaterials[Mcounter].material.M_diff);
                glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, ObjectsArray[obj].vMaterials[Mcounter].material.M_spec);
                glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, ObjectsArray[obj].vMaterials[Mcounter].material.M_sh/10);

                if (ObjectsArray[obj].vMaterials[Mcounter].material.texture.numOfBuff != 0){
                    glBindTexture(GL_TEXTURE_2D, ObjectsArray[obj].vMaterials[Mcounter].material.texture.numOfBuff);
                    if (0 == Tex){
                        glEnableClientState(GL_TEXTURE_COORD_ARRAY);
                        Tex = 1;
                    }
                }
                else {
                    if (0 != Tex){
                        glDisableClientState(GL_TEXTURE_COORD_ARRAY);
                        Tex = 0;
                    }

                }

                if (ObjectsArray[obj].lenMaterials > Mcounter + 1){
                    Mcounter++;
                }
            }
            if (opacitynow < 1.0){
                continue;
            }

            Triangle* triangles = NULL;
            triangles = triangilize(ObjectsArray[obj].pPolygons[i]);


            for (int tr = 0; tr < ObjectsArray[obj].pPolygons[i].selfLen-2; ++tr){
                double* vertexes = makeVertexes(triangles[tr]);
                double* normals = makeNormals(triangles[tr]);
                float* textures = makeTextures(triangles[tr]);

                glVertexPointer(3, GL_DOUBLE, 0, vertexes);
                glNormalPointer(GL_DOUBLE, 0, normals);


                if (ObjectsArray[obj].vMaterials[Mcounter].material.texture.numOfBuff != 0 && NULL != textures){
                    glTexCoordPointer(2, GL_FLOAT, 0, textures);
                }
                else {
                    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
                }


                glDrawArrays(GL_TRIANGLE_STRIP, 0, 3);

                free(vertexes);
                free(normals);
                free(textures);
            }
            free(triangles);

        }


}

void Objects_freeObjParams(){
    int len;

    for (int obj = 0; obj < lenObjectsArray; ++obj){

        for (int i = 0; i < ObjectsArray[obj].lenMaterials; ++i){
            free(ObjectsArray[obj].vMaterials[i].material.M_amb);
            free(ObjectsArray[obj].vMaterials[i].material.M_diff);
            free(ObjectsArray[obj].vMaterials[i].material.M_spec);
        }

        //free polygons
        len = ObjectsArray[obj].lenPolygons;
        for (int pol = 0; pol < len; ++pol){

            free(ObjectsArray[obj].pPolygons[pol].vertexes);
            free(ObjectsArray[obj].pPolygons[pol].textures);
            free(ObjectsArray[obj].pPolygons[pol].normals);
        }

        free(ObjectsArray[obj].pPolygons);
        free(ObjectsArray[obj].name);
        ObjectsArray[obj].pPolygons = NULL;

    }
}

void Objects_makeScene(){
    bool flag = 0;

    for (int obj = 0; obj < lenObjectsArray; ++obj){
        for (int i = 0; i < CULL_FACE_OBJLEN; ++i){
            if (0 == strcmp(ObjectsArray[obj].name, Obj_CULLFACEONNAMES[i])){
                flag = 1;
                break;
                }
            }

        if (!flag) glCallList(ObjectsArray[obj].numOfList);
        flag = 0;

        for (int c = 0; c < SAME_OBJECTSLEN; ++c){
         //   printf("%s\n", ObjectsArray[i].name);
            if (0 == strcmp(ObjectsArray[obj].name, Obj_SAMEOBJNAMES[c])){
               // printf("s\n");
                glPushMatrix();
                glTranslatef(Obj_SAMEOBJCOORDS[c][0], Obj_SAMEOBJCOORDS[c][1], Obj_SAMEOBJCOORDS[c][2]);
                glRotatef(Obj_SAMEOBJCOORDS[c][3], 1, 0, 0);
                glRotatef(Obj_SAMEOBJCOORDS[c][4], 0, 1, 0);
                glRotatef(Obj_SAMEOBJCOORDS[c][5], 0, 0, 1);
                glCallList(ObjectsArray[obj].numOfList);
                glPopMatrix();
            }
        }
    }

    glEnable(GL_CULL_FACE);
    for (int obj = 0; obj < lenObjectsArray; ++obj){
        for (int i = 0; i < CULL_FACE_OBJLEN; ++i){
            if (0 == strcmp(ObjectsArray[obj].name, Obj_CULLFACEONNAMES[i])){
                flag = 1;
                break;
                }
            }

        if (flag) glCallList(ObjectsArray[obj].numOfList);
        flag = 0;
    }

    Objects_drawGlass();
}

void makeLists(){
    int len;

    GLuint numList;
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_NORMAL_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);

    glActiveTexture(GL_TEXTURE0);

    glLineWidth(2.0);
    glPointSize(1.0);
    for (int obj = 0; obj < lenObjectsArray; ++obj){

        glDisable(GL_CULL_FACE);
        numList = glGenLists(1);
        glNewList(numList, GL_COMPILE);
        makeList(obj);
        glEndList();
        ObjectsArray[obj].numOfList = numList;
    }

    glBindTexture(GL_TEXTURE_2D, 0);
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisableClientState(GL_NORMAL_ARRAY);

  //  glDisable(GL_TEXTURE_2D);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);

}

void freeScene(void){
    free(ObjectsArray);
}
