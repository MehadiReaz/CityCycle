#include<windows.h>
#include<GL/glut.h>
void Idle(){
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void road(){
    glBegin(GL_QUADS);
       glColor3f(0.05f, 0.05f, 0.05f);
       glVertex2f(-1,0.4);
       glVertex2f(1,0.4);
       glVertex2f(1,0.0);
       glVertex2f(-1,0.0);
       glEnd();

    glPushMatrix();
	glTranslatef(0.0f,0.0f,0.0f);

    glLineWidth(8.0);
    glBegin(GL_LINES);
       glColor3f(0.5f, 0.5f, 0.5f);
       glVertex2f(-2.0,0.2);
       glVertex2f(2.0,0.2);

       glVertex2f(-2.0,0.0);
       glVertex2f(0.2,0.0);

       glVertex2f(0.5,0.0);
       glVertex2f(2.0,0.0);

       glVertex2f(0.2,0.015);
       glVertex2f(0.2,-0.7);

       glVertex2f(0.5,0.015);
       glVertex2f(0.5,-0.7);

    glLineWidth(1.0);                 //Water line
    glBegin(GL_LINES);
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.425,-0.2);
       glVertex2f(0.425,-0.4);

       glVertex2f(-1.8,0.1);
       glVertex2f(-2.0,0.1);

       glVertex2f(-1.4,0.1);
       glVertex2f(-1.6,0.1);

       glVertex2f(-1.0,0.1);
       glVertex2f(-1.2,0.1);

       glVertex2f(-0.8,0.1);
       glVertex2f(-0.6,0.1);

       glVertex2f(-0.3,0.1);
       glVertex2f(-0.1,0.1);

       glVertex2f(0.2,0.1);
       glVertex2f(0.4,0.1);

       glVertex2f(0.7,0.1);
       glVertex2f(0.9,0.1);

       glVertex2f(1.1,0.1);
       glVertex2f(1.3,0.1);

       glVertex2f(1.5,0.1);
       glVertex2f(1.7,0.1);

       glVertex2f(1.9,0.1);
       glVertex2f(2.0,0.1);//road lower line

       glVertex2f(-1.6,0.3); // road upper lines
       glVertex2f(-1.8,0.3);

       glVertex2f(-1.2,0.3);
       glVertex2f(-1.4,0.3);

       glVertex2f(-0.8,0.3);
       glVertex2f(-1.0,0.3);

       glVertex2f(-0.6,0.3);
       glVertex2f(-0.4,0.3);

       glVertex2f(-0.1,0.3);
       glVertex2f(0.1,0.3);

       glVertex2f(0.4,0.3);
       glVertex2f(0.6,0.3);

       glVertex2f(0.8,0.3);
       glVertex2f(1.0,0.3);

       glVertex2f(1.2,0.3);
       glVertex2f(1.4,0.3);

       glVertex2f(1.8,0.3);
       glVertex2f(1.6,0.3);


       glVertex2f(0.275,0.1); //road2 lines
       glVertex2f(0.275,-0.1);

       glVertex2f(0.275,-0.4); //road2 lines
       glVertex2f(0.275,-0.6);

       glVertex2f(-1.6,-0.2); //water lines
       glVertex2f(-1.8,-0.2);

       glVertex2f(-1.1,-0.2);
       glVertex2f(-1.3,-0.2);

       glVertex2f(-0.9,-0.2);
       glVertex2f(-0.7,-0.2);

       glVertex2f(-0.3,-0.2);
       glVertex2f(-0.1,-0.2);

       glVertex2f(-1.7,-0.4);
       glVertex2f(-1.9,-0.4);

       glVertex2f(-1.2,-0.4);
       glVertex2f(-1.4,-0.4);

       glVertex2f(-0.8,-0.4);
       glVertex2f(-1.0,-0.4);

       glVertex2f(-0.6,-0.4);
       glVertex2f(-0.4,-0.4);

       glVertex2f(-0.15,-0.4);
       glVertex2f(0.1,-0.4);

       glEnd();
    glPopMatrix();
}
void road2(){
    glPushMatrix();
	glTranslatef(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
	glColor3f(0.05f, 0.05f, 0.05f);
	   glVertex2f(0.2f, -0.7f);
       glVertex2f(0.2f, 0.02f);
       glVertex2f(0.5f, 0.02f);
	   glVertex2f(0.5f, -0.7f);
	   glEnd();
    glPopMatrix();
}
void display() {
    glClearColor(1.0f,1.0f,1.0f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(0.0f, -0.55f, 0.0f);
	glScalef(1.0f, 0.65f, 0.0f);
	road();
	road2();
	glFlush();  // Render now
}
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowSize(1100,550);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Night Scene");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


