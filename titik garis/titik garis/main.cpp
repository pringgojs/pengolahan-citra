//
//  main.cpp
//  titik garis
//
//  Created by Pringgo Juni Saputro on 24/11/18.
//  Copyright © 2018 Pringgo Juni Saputro. All rights reserved.
//
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include <iostream>
#include <math.h>



typedef struct {
    int x, y, z;
} Point3D_t;

typedef struct {
    int numofVertices;
    short int pnt[32];
} face_t;

typedef struct {
    int numofVertices;
    Point3D_t pnt[100];
    int numofFaces;
    face_t fc[32];
} object3D_t;

void drawline3D(Point3D_t titik3D[], int n) {
//    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_LINES);
    for (int i = 0; i<n; i++) {
        glVertex2d(titik3D[i].x, titik3D[i].y);
    }
    glEnd();
    glFlush();
}
//
//void Initialize() {
//    glClearColor(1.0, 1.0, 1.0, 0.0);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluOrtho2D(-200, 200, -200, 200);
//
//}

void createTitikKerucut() {
    
    Point3D_t titik3D[14];
    object3D_t kerucut;
    
    titik3D[0].x = 0;
    titik3D[0].y = 100;
    titik3D[0].z = 0;
    
    for (int i=1;i<=12; i++) {
        titik3D[i].x = 100 * cos((i-1 )* 30 * 3.14/180);
        titik3D[i].y = 0;
        titik3D[i].z = 100 * sin((i-1 )* 30 * 3.14/180);;
    }
    
    
    titik3D[13].x = 0;
    titik3D[13].y = 0;
    titik3D[13].z = 0;
    
    kerucut.numofVertices = 14;
    kerucut.numofFaces = 24;
    for (int i =0; i<24; i++) {
        kerucut.pnt[i] = titik3D[i];
    }
    
    for (int i=0; i<11; i++) {
        kerucut.fc[i].numofVertices = 3;
        kerucut.fc[i].pnt[0] = 0;
        kerucut.fc[i].pnt[1] = i + 1;
        kerucut.fc[i].pnt[2] = i + 2;
    }
    
    kerucut.fc[11].numofVertices = 3;
    kerucut.fc[11].pnt[0] = 0;
    kerucut.fc[11].pnt[1] = 12;
    kerucut.fc[11].pnt[2] = 1;
    
    // alas lingkaran
    for (int i=12; i<=24; i++) {
        kerucut.fc[i].numofVertices = 3;
        kerucut.fc[i].pnt[0] = 13;
        kerucut.fc[i].pnt[1] = i - 11;
        kerucut.fc[i].pnt[2] = i - 10;
    }
    
    // loping sampai 24
    
//    int p = 0;
//    int p1 = kerucut.fc[0].pnt[0];
//    titik3D[0] = kerucut.pnt[p1];
//    for (int i=0; i<24; i++) {
//        int p1 = kerucut.fc[i].pnt[0];
//        int p2 = kerucut.fc[i].pnt[1];
//        int p3 = kerucut.fc[i].pnt[2];
//        titik3D[0] = kerucut.pnt[p1];
//        titik3D[1] = kerucut.pnt[p2];
//        titik3D[2] = kerucut.pnt[p3];
//    }
    
    int p1 = kerucut.fc[0].pnt[0];
    int p2 = kerucut.fc[0].pnt[1];
    int p3 = kerucut.fc[0].pnt[2];
    int p4 = kerucut.fc[0].pnt[3];
    int p5 = kerucut.fc[0].pnt[4];
    int p6 = kerucut.fc[0].pnt[5];
    int p7 = kerucut.fc[0].pnt[6];
    int p8 = kerucut.fc[0].pnt[7];
    int p9 = kerucut.fc[0].pnt[8];
    int p10 = kerucut.fc[0].pnt[9];
    int p11 = kerucut.fc[0].pnt[10];
    int p12 = kerucut.fc[0].pnt[11];
    int p13 = kerucut.fc[0].pnt[12];
    int p14 = kerucut.fc[0].pnt[13];
    int p15 = kerucut.fc[0].pnt[14];
    int p16 = kerucut.fc[0].pnt[15];
    int p17 = kerucut.fc[0].pnt[16];
    int p18 = kerucut.fc[0].pnt[17];
    int p19 = kerucut.fc[0].pnt[18];
    int p20 = kerucut.fc[0].pnt[19];
    int p21 = kerucut.fc[0].pnt[20];
    int p22 = kerucut.fc[0].pnt[21];
    int p23 = kerucut.fc[0].pnt[22];
    int p24 = kerucut.fc[0].pnt[23];

    titik3D[0] = kerucut.pnt[p1];
    titik3D[1] = kerucut.pnt[p2];
    titik3D[2] = kerucut.pnt[p3];
    titik3D[3] = kerucut.pnt[p4];
    titik3D[4] = kerucut.pnt[p5];
    titik3D[5] = kerucut.pnt[p6];
    titik3D[6] = kerucut.pnt[p7];
    titik3D[7] = kerucut.pnt[p8];
    titik3D[8] = kerucut.pnt[p9];
    titik3D[9] = kerucut.pnt[p10];
    titik3D[10] = kerucut.pnt[p11];
    titik3D[11] = kerucut.pnt[p12];
    titik3D[12] = kerucut.pnt[p13];
    
    titik3D[13] = kerucut.pnt[p14];
//    titik3D[14] = kerucut.pnt[p15];
//    titik3D[15] = kerucut.pnt[p16];
//    titik3D[16] = kerucut.pnt[p17];
//    titik3D[17] = kerucut.pnt[p18];
//    titik3D[18] = kerucut.pnt[p19];
//    titik3D[19] = kerucut.pnt[p20];
//    titik3D[20] = kerucut.pnt[p21];
//    titik3D[21] = kerucut.pnt[p22];
//    titik3D[22] = kerucut.pnt[p23];
//    titik3D[23] = kerucut.pnt[p24];
//
//
//
    drawline3D(titik3D, 12);
    
}

void Initialize() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-200, 200, -200, 200);
}

void titik() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 1.0, 0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex3f(15.0, 15.0, 0.0);
    glVertex3f(-15.0, 15.0, 0.0);
    glVertex3f(-15.0, -15.0, 0.0);
    glVertex3f(15.0, -15.0, 0.0);
    glEnd();
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_LINES);
    glVertex3f(-25, 25, 0.0);
    glVertex3f(-175.0, 175.0, 0.0);
    glEnd();
    glFlush();
}

int main(int iArgc, char** cppArgv) {
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("test");
    Initialize();
    glutDisplayFunc(createTitikKerucut);
    glutMainLoop();
    return 0;
}
