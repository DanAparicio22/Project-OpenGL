#include <GL/glew.h>
#include <GL/freeglut.h>
#include <iostream>
using namespace std;

const int WIDTH = 1280;
const int HEIGHT = 960;

void OnInit() {
	glClearColor(1, 0, 0, 0);
	cout << "Initialization successfull" << endl;
}

void OnShutdown() {
	cout << "Shutdown successfull" << endl;
}

void OnResize(int nw, int nh) {

}

void OnRender() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitContextVersion(3, 3);
	glutInitContextFlags(GLUT_CORE_PROFILE | GLUT_DEBUG);
	glutInitContextProfile(GLUT_FORWARD_COMPATIBLE);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutCreateWindow("Getting started with OpenGL 3.3");
	OnInit();
	glutCloseFunc(OnShutdown);
	glutDisplayFunc(OnRender);
	glutReshapeFunc(OnResize);
	glutMainLoop();
	return 0;
}