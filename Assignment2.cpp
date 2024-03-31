/*#include <GL/freeglut.h>
#include <iostream>


enum BodyPart {
    LOWER_BODY, UPPER_BODY, RIGHT_THIGH, LEFT_THIGH, 
    RIGHT_ARM, NECK, LEFT_ARM, 
    RIGHT_FORE_ARM, RIGHT_HAND, 
    HEAD, 
    LEFT_FORE_ARM, LEFT_HAND, 
    RIGHT_LEG, RIGHT_FOOT,
    LEFT_LEG, LEFT_FOOT
    ,
    NUM_BODY_PARTS
};

// Variables to store rotation angles for each body part
float rotationAngles[NUM_BODY_PARTS] = { 0 };

// Current selected body part index
int selectedPart = 0;

void drawRobot() {

    glPushMatrix();
    //Lower Body
    if (selectedPart == LOWER_BODY)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(0.0f, 0.0f, 0.0f);
    glRotatef(rotationAngles[LOWER_BODY], 0, 0, 1);
    glTranslatef(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(-0.2f, 0.0f);
    glEnd();
    
    glPushMatrix();
    //Upper Body
    if (selectedPart == UPPER_BODY)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f); // Set color to black
    glTranslatef(0.0f, 0.0f, 0.0f);
    glRotatef(rotationAngles[UPPER_BODY], 0, 0, 1);
    glTranslatef(0.0f, -0.0f, 0.0f); 
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.3f, 0.0f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(-0.3f, 0.3f);
    glEnd();

    glPushMatrix();
    //Right Arm
    if (selectedPart == RIGHT_ARM)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f); // Set color to black
    glTranslatef(-0.3f, 0.15f, 0.0f);
    glRotatef(rotationAngles[RIGHT_ARM], 0, 0, 1);
    glTranslatef(0.3f, -0.15f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.3f, 0.2f);
    glEnd();

    //Right Fore Arm
    if (selectedPart == RIGHT_FORE_ARM)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f); // Set color to black
    glTranslatef(-0.5f, 0.15f, 0.0f);
    glRotatef(rotationAngles[RIGHT_FORE_ARM], 0, 0, 1);
    glTranslatef(0.5f, -0.15f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.7f, 0.1f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.5f, 0.2f);
    glEnd();


    //Right Hand
    if (selectedPart == RIGHT_HAND)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f); // Set color to black
    glTranslatef(-0.7f, 0.15f, 0.0f);
    glRotatef(rotationAngles[RIGHT_HAND], 0, 0, 1);
    glTranslatef(0.7f, -0.15f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.7f, 0.05f);
    glVertex2f(-0.8f, 0.05f);
    glVertex2f(-0.85f, 0.15f);
    glVertex2f(-0.8f, 0.25f);
    glVertex2f(-0.7f, 0.25f);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    //Neck
    if (selectedPart == NECK)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f); // Set color to black
    glTranslatef(0.0f, 0.3f, 0.0f);
    glRotatef(rotationAngles[NECK], 0, 0, 1);
    glTranslatef(0.0f, -0.3f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.05f, 0.3f);
    glVertex2f(0.05f, 0.3f);
    glVertex2f(0.05f, 0.4f);
    glVertex2f(-0.05f, 0.4f);
    glEnd();

    //Head
    if (selectedPart == HEAD)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f); // Set color to black
    glTranslatef(0.0f, 0.4f, 0.0f);
    glRotatef(rotationAngles[HEAD], 0, 0, 1);
    glTranslatef(0.0f, -0.4f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(0.2f, 0.6f);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(-0.2f, 0.6f);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    //Left Arm
    if (selectedPart == LEFT_ARM)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f); // Set color to black
    glTranslatef(0.3f, 0.15f, 0.0f);
    glRotatef(rotationAngles[LEFT_ARM], 0, 0, 1);
    glTranslatef(-0.3f, -0.15f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.3f, 0.1f);
    glVertex2f(0.5f, 0.1f);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.3f, 0.2f);
    glEnd();

    //Left Fore Arm
    if (selectedPart == LEFT_FORE_ARM)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f); // Set color to black
    glTranslatef(0.5f, 0.15f, 0.0f);
    glRotatef(rotationAngles[LEFT_FORE_ARM], 0, 0, 1);
    glTranslatef(-0.5f, -0.15f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.5f, 0.1f);
    glVertex2f(0.7f, 0.1f);
    glVertex2f(0.7f, 0.2f);
    glVertex2f(0.5f, 0.2f);
    glEnd();

    //Left Hand
    if (selectedPart == LEFT_HAND)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f); // Set color to black
    glTranslatef(0.7f, 0.15f, 0.0f);
    glRotatef(rotationAngles[LEFT_HAND], 0, 0, 1);
    glTranslatef(-0.7f, -0.15f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.7f, 0.05f);
    glVertex2f(0.8f, 0.05f);
    glVertex2f(0.85f, 0.15f);
    glVertex2f(0.8f, 0.25f);
    glVertex2f(0.7f, 0.25f);
    glEnd();

    glPopMatrix();

    glPopMatrix();
    
    glPushMatrix();
    //Right Thigh
    if (selectedPart == RIGHT_THIGH)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(-0.15f, -0.2f, 0.0f);
    glRotatef(rotationAngles[RIGHT_THIGH], 0, 0, 1);
    glTranslatef(0.15f, 0.2f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(-0.2f, -0.4f);
    glEnd();

    //Right Leg
    if (selectedPart == RIGHT_LEG)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(-0.15f, -0.4f, 0.0f);
    glRotatef(rotationAngles[RIGHT_LEG], 0, 0, 1);
    glTranslatef(0.15f, 0.4f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2f, -0.4f);
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(-0.2f, -0.6f);
    glEnd();

    //Right Foot
    if (selectedPart == RIGHT_FOOT)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(-0.15f, -0.6f, 0.0f);
    glRotatef(rotationAngles[RIGHT_FOOT], 0, 0, 1);
    glTranslatef(0.15f, 0.6f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.4f, -0.7f);
    glVertex2f(-0.4f, -0.6f);
    glVertex2f(-0.1f, -0.6f);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    //Left Thigh
    if (selectedPart == LEFT_THIGH)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(0.15f, -0.2f, 0.0f);
    glRotatef(rotationAngles[LEFT_THIGH], 0, 0, 1);
    glTranslatef(-0.15f, 0.2f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.4f);
    glVertex2f(0.2f, -0.4f);
    glEnd();

    //Left Leg
    if (selectedPart == LEFT_LEG)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(0.15f, -0.4f, 0.0f);
    glRotatef(rotationAngles[LEFT_LEG], 0, 0, 1);
    glTranslatef(-0.15f, 0.4f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.1f, -0.4f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.2f, -0.6f);
    glEnd();

    //Left Foot
    if (selectedPart == LEFT_FOOT)
        glColor3f(1.0, 0.0, 0.0); // Highlight in red if selected
    else
        glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(0.15f, -0.6f, 0.0f);
    glRotatef(rotationAngles[LEFT_FOOT], 0, 0, 1);
    glTranslatef(-0.15f, 0.6f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.4f, -0.7f);
    glVertex2f(0.4f, -0.6f);
    glVertex2f(0.1f, -0.6f);
    glEnd();


    glPopMatrix();
    glPopMatrix();

}

void display() {
    glClear(GL_COLOR_BUFFER_BIT); 
    glLoadIdentity();

    drawRobot();
    glutSwapBuffers(); 
}

void rotateBodyPart(int key, int x, int y) {
    switch (key) {
    case GLUT_KEY_LEFT:
        rotationAngles[selectedPart] -= 2.0f;
        break;
    case GLUT_KEY_RIGHT:
        rotationAngles[selectedPart] += 2.0f;
        break;
    default:
        break;
    }
    glutPostRedisplay();
      
}
    

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'q':
        exit(0);
        break;
    case 'n':
        selectedPart = (selectedPart + 1) % NUM_BODY_PARTS;
        std::cout << "Selected body part: " << selectedPart << std::endl;
        break;
    case 'r':
        rotationAngles[selectedPart] = 0.0f;
        std::cout << "Reset rotation for body part " << selectedPart << std::endl;
        break;
    default:
        break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); 
    glutInitWindowSize(1000, 800); 
    glutCreateWindow("2D Robot"); 

    glutDisplayFunc(display); 
    glutKeyboardFunc(keyboard); 
    glutSpecialFunc(rotateBodyPart);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 

    glutMainLoop(); 

    return 0;
}*/