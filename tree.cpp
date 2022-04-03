void tree(){
    glPushMatrix(); //from the left
	glTranslatef(_moveAll,0.0f,0.0f);
    glLineWidth(20.0);
    glBegin(GL_LINES);
    glColor3f(0.5f, 0.2f, 0.2f);
    glVertex2f(0.8f, 1.0f);
    glVertex2f(0.8f, 0.53f);
    glEnd();

    glColor3f(0.0f, treeCtrl, 0.0f);
    circle(0.8f,1.15f,0.1f);
    circle(0.75f,1.0f,0.1f);
    circle(0.85f,1.0f,0.1f);

    glPushMatrix();
	glTranslatef(-0.9,0.1f,0.0f);
    glLineWidth(20.0);
    glBegin(GL_LINES);
    glColor3f(0.5f, 0.2f, 0.2f);
    glVertex2f(0.8f, 1.0f);
    glVertex2f(0.8f, 0.53f);
    glEnd();

    glColor3f(0.0f, treeCtrl, 0.0f);
    circle(0.8f,1.15f,0.1f);
    circle(0.75f,1.0f,0.1f);
    circle(0.85f,1.0f,0.1f);

    glPushMatrix();
	glTranslatef(0.25,-0.1f,0.0f);
    glLineWidth(20.0);
    glBegin(GL_LINES);
    glColor3f(0.5f, 0.2f, 0.2f);
    glVertex2f(0.8f, 1.0f);
    glVertex2f(0.8f, 0.53f);
    glEnd();

    glColor3f(0.0f, treeCtrl, 0.0f);
    circle(0.8f,1.15f,0.1f);
    circle(0.75f,1.0f,0.1f);
    circle(0.85f,1.0f,0.1f);

    glPopMatrix();
}
