#include<windows.h>
#include<GL/glut.h>

void house(){
    glPushMatrix();
	glTranslatef(0.0f,0.0f,0.0f);

	glPushMatrix();
	glTranslatef(-0.5,0.0f,0.0f);
    glBegin(GL_QUAD_STRIP);
	glColor3f(0.8f, 0.8f, 0.8f);
       glVertex2f(-0.76f, 0.55f);
       glVertex2f(-0.6f, 0.55f);
	   glVertex2f(-0.76f, 1.2f);
	   glVertex2f(-0.6f, 1.2f);
	   glEnd();

	glLineWidth(10.0);
    glBegin(GL_LINES);
       glColor3f(1.0f, 1.0f,0.0f);
       glVertex2f(-0.74,1.15);
       glVertex2f(-0.715,1.15);

       glVertex2f(-0.665,1.15);
       glVertex2f(-0.62,1.15);

       glVertex2f(-0.74,1.05);
       glVertex2f(-0.715,1.05);

       glVertex2f(-0.74,0.95);
       glVertex2f(-0.715,0.95);
       glEnd();

    glBegin(GL_QUAD_STRIP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.7f, 0.5f);
	glVertex2f(-0.9f, 0.9f);
	glVertex2f(-0.7f, 0.9f);
	glEnd();

	glLineWidth(10.0);
    glBegin(GL_LINES);
       glColor3f(1.0f, 1.0f,0.0f);
       glVertex2f(-0.87,0.8);
       glVertex2f(-0.84,0.8);

       glVertex2f(-0.87,0.7);
       glVertex2f(-0.84,0.7);

       glVertex2f(-0.87,0.6);
       glVertex2f(-0.84,0.6);

       glVertex2f(-0.81,0.8);
       glVertex2f(-0.78,0.8);

       glVertex2f(-0.81,0.7);
       glVertex2f(-0.78,0.7);

       glVertex2f(-0.81,0.6);
       glVertex2f(-0.78,0.6);

       glVertex2f(-0.75,0.8);
       glVertex2f(-0.72,0.8);

       glVertex2f(-0.75,0.7);
       glVertex2f(-0.72,0.7);

       glVertex2f(-0.735,0.59);
       glVertex2f(-0.735,0.5);
       glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.5f, 1.0f);
	   glVertex2f(-0.58f, 0.51f);
	   glVertex2f(-0.58f, 1.1f);
	   glVertex2f(-0.69f, 1.1f);
	   glVertex2f(-0.69f, 0.51f);
	   glEnd();

    glLineWidth(10.0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
       glVertex2f(-0.68,1.0);
       glVertex2f(-0.65,1.0);

       glVertex2f(-0.68,0.9);
       glVertex2f(-0.65,0.9);

       glVertex2f(-0.68,0.8);
       glVertex2f(-0.65,0.8);

       glVertex2f(-0.68,0.7);
       glVertex2f(-0.65,0.7);

       glVertex2f(-0.68,0.6);
       glVertex2f(-0.65,0.6);

       glVertex2f(-0.62,1.0);
       glVertex2f(-0.59,1.0);

       glVertex2f(-0.62,0.9);
       glVertex2f(-0.59,0.9);

       glVertex2f(-0.62,0.8);
       glVertex2f(-0.59,0.8);

       glVertex2f(-0.62,0.7);
       glVertex2f(-0.59,0.7);

       glVertex2f(-0.61,0.61);
       glVertex2f(-0.61,0.51);

       glEnd();

	glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.5f);
	   glVertex2f(-0.5f, 0.52f);
	   glVertex2f(-0.5f, 0.75f);
	   glVertex2f(-0.35f, 0.75f);
	   glVertex2f(-0.35f, 0.52f);
	   glEnd();



	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.6f);
	   glVertex2f(-0.6f, 0.5f);
	   glVertex2f(-0.6f, 0.95f);
	   glVertex2f(-0.45f, 0.95f);
	   glVertex2f(-0.45f, 0.5f);
	   glEnd();

    glLineWidth(10.0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
       glVertex2f(-0.525,0.9);
       glVertex2f(-0.47,0.9);

       glVertex2f(-0.525,0.8);
       glVertex2f(-0.47,0.8);

       glVertex2f(-0.525,0.7);
       glVertex2f(-0.47,0.7);

       glVertex2f(-0.525,0.6);
       glVertex2f(-0.47,0.6);

       glVertex2f(-0.55,0.9);
       glVertex2f(-0.58,0.9);

       glVertex2f(-0.55,0.8);
       glVertex2f(-0.58,0.8);

       glVertex2f(-0.55,0.7);
       glVertex2f(-0.58,0.7);

       glVertex2f(-0.5675,0.6);
       glVertex2f(-0.5675,0.5);

       glEnd();

    glLineWidth(10.0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
       glVertex2f(-0.4,0.7);
       glVertex2f(-0.36,0.7);

       glVertex2f(-0.4,0.62);
       glVertex2f(-0.36,0.62);

       glVertex2f(-0.43,0.59);
       glVertex2f(-0.43,0.52);
       glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(-0.43,0.74);
       glVertex2f(-0.43,0.62);
       glEnd();

    glPushMatrix();
	glTranslatef(0.55,0.0f,0.0f);
   glBegin(GL_QUAD_STRIP);
	glColor3f(1.0f, 0.2f, 0.2f);
       glVertex2f(-0.76f, 0.55f);
       glVertex2f(-0.6f, 0.55f);
	   glVertex2f(-0.76f, 1.2f);
	   glVertex2f(-0.6f, 1.2f);
	   glEnd();

	glLineWidth(10.0);
    glBegin(GL_LINES);
       glColor3f(1.0f, 1.0f,0.0f);
       glVertex2f(-0.74,1.15);
       glVertex2f(-0.715,1.15);

       glVertex2f(-0.665,1.15);
       glVertex2f(-0.62,1.15);

       glVertex2f(-0.74,1.05);
       glVertex2f(-0.715,1.05);

       glVertex2f(-0.74,0.95);
       glVertex2f(-0.715,0.95);
       glEnd();

    glBegin(GL_QUAD_STRIP);
	glColor3f(1.0f, 0.5f, 1.0f);
	glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.7f, 0.5f);
	glVertex2f(-0.9f, 0.9f);
	glVertex2f(-0.7f, 0.9f);
	glEnd();

	glLineWidth(10.0);
    glBegin(GL_LINES);
       glColor3f(1.0f, 1.0f,0.0f);
       glVertex2f(-0.87,0.8);
       glVertex2f(-0.84,0.8);

       glVertex2f(-0.87,0.7);
       glVertex2f(-0.84,0.7);

       glVertex2f(-0.87,0.6);
       glVertex2f(-0.84,0.6);

       glVertex2f(-0.81,0.8);
       glVertex2f(-0.78,0.8);

       glVertex2f(-0.81,0.7);
       glVertex2f(-0.78,0.7);

       glVertex2f(-0.81,0.6);
       glVertex2f(-0.78,0.6);

       glVertex2f(-0.75,0.8);
       glVertex2f(-0.72,0.8);

       glVertex2f(-0.75,0.7);
       glVertex2f(-0.72,0.7);

       glVertex2f(-0.735,0.59);
       glVertex2f(-0.735,0.5);
       glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.5f, 1.0f);
	   glVertex2f(-0.58f, 0.51f);
	   glVertex2f(-0.58f, 1.1f);
	   glVertex2f(-0.69f, 1.1f);
	   glVertex2f(-0.69f, 0.51f);
	   glEnd();

    glLineWidth(10.0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
       glVertex2f(-0.68,1.0);
       glVertex2f(-0.65,1.0);

       glVertex2f(-0.68,0.9);
       glVertex2f(-0.65,0.9);

       glVertex2f(-0.68,0.8);
       glVertex2f(-0.65,0.8);

       glVertex2f(-0.68,0.7);
       glVertex2f(-0.65,0.7);

       glVertex2f(-0.68,0.6);
       glVertex2f(-0.65,0.6);

       glVertex2f(-0.62,1.0);
       glVertex2f(-0.59,1.0);

       glVertex2f(-0.62,0.9);
       glVertex2f(-0.59,0.9);

       glVertex2f(-0.62,0.8);
       glVertex2f(-0.59,0.8);

       glVertex2f(-0.62,0.7);
       glVertex2f(-0.59,0.7);

       glVertex2f(-0.61,0.61);
       glVertex2f(-0.61,0.51);

       glEnd();

	glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.5f);
	   glVertex2f(-0.5f, 0.52f);
	   glVertex2f(-0.5f, 0.75f);
	   glVertex2f(-0.35f, 0.75f);
	   glVertex2f(-0.35f, 0.52f);
	   glEnd();



	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.6f);
	   glVertex2f(-0.6f, 0.5f);
	   glVertex2f(-0.6f, 0.95f);
	   glVertex2f(-0.45f, 0.95f);
	   glVertex2f(-0.45f, 0.5f);
	   glEnd();

    glLineWidth(10.0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
       glVertex2f(-0.525,0.9);
       glVertex2f(-0.47,0.9);

       glVertex2f(-0.525,0.8);
       glVertex2f(-0.47,0.8);

       glVertex2f(-0.525,0.7);
       glVertex2f(-0.47,0.7);

       glVertex2f(-0.525,0.6);
       glVertex2f(-0.47,0.6);

       glVertex2f(-0.55,0.9);
       glVertex2f(-0.58,0.9);

       glVertex2f(-0.55,0.8);
       glVertex2f(-0.58,0.8);

       glVertex2f(-0.55,0.7);
       glVertex2f(-0.58,0.7);

       glVertex2f(-0.5675,0.6);
       glVertex2f(-0.5675,0.5);

       glEnd();

    glLineWidth(10.0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
       glVertex2f(-0.4,0.7);
       glVertex2f(-0.36,0.7);

       glVertex2f(-0.4,0.62);
       glVertex2f(-0.36,0.62);

       glVertex2f(-0.43,0.59);
       glVertex2f(-0.43,0.52);
       glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f,0.0f);
       glVertex2f(-0.43,0.74);
       glVertex2f(-0.43,0.62);
       glEnd();
    glPopMatrix();
}

void display() {
    glClearColor(1.0f,1.0f,1.0f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(0.0f, -0.55f, 0.0f);
	glScalef(1.0f, 0.65f, 0.0f);
	house();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5f, -0.7f, 0.0f);
	glPopMatrix();
	glFlush();
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
