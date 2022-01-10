#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>
using namespace std;
int x1=200, x2=400, x3=300, y1=400, y2=400, y3=600;
void init()
{
	glClearColor(1.0, 0.0, 0.0, 1.0);
   	glMatrixMode(GL_PROJECTION);
   	gluOrtho2D(0.0, 700, 0.0, 700);
}
void display()
{
	glColor3f(0,1,0);
        glBegin( GL_TRIANGLES );
        glVertex2i( x1,y1 );
      	glVertex2i( x2,y2 );
        glVertex2i( x3,y3 );
        glEnd();
        glFlush();
}
void event1(unsigned char key, int x, int y )
{
	glColor3f(0,0,0);
        glBegin( GL_TRIANGLES );
        glVertex2i( x1,y1 );
        glVertex2i( x2,y2 );
        glVertex2i( x3,y3 );
        glEnd();
        glFlush();
	if(key=='a'){
		x1 = x1-10;     x2 = x2-10;     x3 = x3-10;
	}
	if(key=='d'){
           	x1 = x1+10;    x2 = x2+10;    x3 = x3+10;
	}
	if(key=='w'){
	        y1 = y1+10;    y2 = y2+10;    y3 = y3+10;
	}
	if(key=='s'){
	        y1 = y1-10;     y2 = y2-10;    y3 = y3-10;
	}
	glColor3f(0,1,0);
	glBegin( GL_TRIANGLES );
	glVertex2i( x1,y1 );
        glVertex2i( x2,y2 );
        glVertex2i( x3,y3 );
        glEnd();
        glFlush();
}
int main(int argc, char**argv)
{
    cout<<"DIGVIJAY\n500076096\nR177219076\n\n";
   	glutInit(&argc, argv);
   	glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB );
   	glutInitWindowSize( 700,700 );
   	glutCreateWindow("Moving Triangle");
   	init();
   	glutDisplayFunc(display);
   	glutKeyboardFunc(event1);
   	glutMainLoop();
}

