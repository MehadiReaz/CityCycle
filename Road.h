float _moveAll = 0.0f;
void road_1(){
    glBegin(GL_QUADS);
       glColor3f(0.05f, 0.05f, 0.05f);
       glVertex2f(-1,0.4);
       glVertex2f(1,0.4);
       glVertex2f(1,0.0);
       glVertex2f(-1,0.0);
       glEnd();
       glPushMatrix();
    glTranslatef(_moveAll,0.0f,0.0f);

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

       glVertex2f(0.35,-0.15); // road 2 line
       glVertex2f(0.35,-0.7);

       glEnd();
       glLineWidth(4.0);
    glBegin(GL_LINES);
       glColor3f(0.0f, 0.3f, 0.0f);
       glVertex2f(-2.0,0.2);
       glVertex2f(2.0,0.2);

       glVertex2f(0.35,-0.15); //road 2 green line
       glVertex2f(0.35,-0.7);
       glEnd();

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

void road_2(){
    glPushMatrix();
    glTranslatef(_moveAll,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.05f, 0.05f, 0.05f);
       glVertex2f(0.2f, -0.7f);
       glVertex2f(0.2f, 0.02f);
       glVertex2f(0.5f, 0.02f);
       glVertex2f(0.5f, -0.7f);
       glEnd();
    glPopMatrix();
}
