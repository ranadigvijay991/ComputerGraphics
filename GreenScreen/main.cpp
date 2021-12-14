#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857

// function to initialize
void init() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	//Line C
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 200);
	glutCreateWindow("Green screen");
}

void display()
{
	glClearColor(0.0, 1.0, 0.0, 0.0);

	glClear(GL_COLOR_BUFFER_BIT);
	// gluOrtho2D(0.0,100.0,0,100.0);
	// glColor3f(0.0, 1.0, 0.0);
	glFlush();
}

int main(int argc, char **argv)
{
    printf("Digvijay  \n 500076096 \n R177219076");
	glutInit(&argc, argv);
	init();
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}
