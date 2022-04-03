#include<GL/glut.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#define PI     3.14159265389
 #include "car.h"



void display (){
glClearColor(1.0f,1.0f,1.0f,1.0f);
glClear(GL_COLOR_BUFFER_BIT);
car();
car2();
glFlush();

}

int main ( int argc , char** argv )
{
glutInit(&argc, argv);
glutInitWindowSize(1000,800);
glutInitWindowPosition(50,50);
glutCreateWindow("car");
glutDisplayFunc(display);
glutMainLoop();
return 0;



}
