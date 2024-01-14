//
// Created by duchungho on 14/01/2024.
//

#include "app.h"
#include "GL/glut.h"

App::App(int *argc, char **argv) {
    this->argc = argc;
    this->argv = argv;
};

void App::init_app() {
    glutInit(this->argc, this->argv);
}

void App::init_parameter() {
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f(1.0f, 1.0f, 1.0f);
    glPointSize(9.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void App::init_display() {
    glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB); //set the display mode
    glutInitWindowSize(640, 480); //set window size
    glutInitWindowPosition(100, 150); // set window position on screen
    glutCreateWindow("The Big Dipper");//open the screen window
}


void App::render(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    glVertex2i(289, 190); // Dubhe
    glVertex2i(320, 128); // Merak
    glVertex2i(239,  67); // Phecda
    glVertex2i(194, 101); // Megrez
    glVertex2i(129,  83); // Alioth
    glVertex2i( 75,  73); // Mizar
    glVertex2i(	74,  74); // Alcor
    glVertex2i( 20,  20); // Alkaid
    glEnd();
    glFlush();
};

void App::display_func() {
    glutDisplayFunc(App::render);
}

void App::loop() {
    glutMainLoop();
}

void App::Run() {
    this->init_app();
    this->init_display();
    this->display_func();
    this->init_parameter();
    this->loop();
}
