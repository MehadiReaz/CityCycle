#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14159265

#include "Road.h"

//float _moveAll = 0.0f;



void display(){
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(0.0f, -0.55f, 0.0f);
    glScalef(1.0f,0.65f,0.0f);
    road_1();
    road_2();

    glPopMatrix();
    glFlush();

}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowSize(1100,850);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Night Scene");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
