#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;

void display (void)
{
	float r = 500;
	float x = 0, y = r;
	float p = 1 - r;
 	glBegin(GL_POINTS);
 	while (x <= y)
 	{
 		x++;
  		if (p < 0) {
   			p += 2 * (x + 1) + 1;
  		}
  		else {
   			y--;
   			p += 2 * (x + 1) + 1 - 2 * (y - 1);
  		}
  		glVertex2i(x, y);
  		glVertex2i(-x, y);
  		glVertex2i(x, -y);
  		glVertex2i(-x, -y);

  		glVertex2i(y, x);
  		glVertex2i(-y, x);
  		glVertex2i(y, -x);
  		glVertex2i(-y, -x);

 	}
 	glEnd();
 	glFlush();
}

void init(void)
{
	glClearColor(1.0, 0.0, 0.0, 1.0);
   	glMatrixMode(GL_PROJECTION);
   	gluOrtho2D(-700, 700, -700, 700);
}

int main(int argc, char** argv)
{
    cout<<"Digvijay \n 500076096 \n";
	glutInit(&argc, argv);

	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (700,700);
	glutInitWindowPosition (600,600);
	glutCreateWindow ("Mid Point Circle Drawing");
	init();
	glutDisplayFunc(display);
	glutMainLoop();


	return 0;
}
