//
//  main.cpp
//  kerucut berputar
//
//  Created by Pringgo Juni Saputro on 24/11/18.
//  Copyright © 2018 Pringgo Juni Saputro. All rights reserved.
//
#include <iostream>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include <stdio.h>
#include <math.h>

void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.4, 0.3, 1.0);
    glLoadIdentity ();                     /* clear the matrix */
    /* viewing transformation  */
    gluLookAt (0.0, -8.0, 3.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0);
    glScalef (4.0, 4.0, 1.5);              /* modeling transformation */
    glutWireCone(0.5, 3.0, 50,1);
    
    /** Function glutWireCone
     glutWireCone(GLdouble base, GLdouble height, GLint slices, GLint stacks);
    
     base: The radius of the base of the cone.
     height: The height of the cone.
     slices: The number of subdivisions around the Z axis.
     stacks: The number of subdivisions along the Z axis.
     **/
    glFlush ();
}

void reshape (int w, int h)
{
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    glFrustum (-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
    glMatrixMode (GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow("Pringgo JS | Kerucut");
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
