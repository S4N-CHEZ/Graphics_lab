

#include "Render.h"

#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>

double A[] = { 1, 1, 0 };
double B[] = { -1, 1, 0 };
double C[] = { -1,-1, 0 };
double D[] = { 1,-1, 0 };



void Figure(double i)
{
	glRotated(i, 0, 1, 0);
	glBegin(GL_QUADS);

	glColor3d(0.2, 0.7, 0.7);

	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);

	glEnd();



	glBegin(GL_QUADS);

	glColor3d(0.2, 0.7, 0.3);

	glVertex3d(1, 1, 1);
	glVertex3d(-1, 1, 1);
	glVertex3d(-1, -1, 1);
	glVertex3d(1, -1, 1);

	glEnd();



	glBegin(GL_QUADS);

	glColor3d(0.2, 0.1, 0.3);

	glVertex3d(1, 1, 1);
	glVertex3d(1, -1, 1);
	glVertex3d(1, -1, 0);
	glVertex3d(1, 1, 0);

	glEnd();



	glBegin(GL_QUADS);

	glColor3d(1, 1, 0.3);

	glVertex3d(-1, -1, 1);
	glVertex3d(-1, 1, 1);
	glVertex3d(-1, 1, 0);
	glVertex3d(-1, -1, 0);

	glEnd();



	glBegin(GL_QUADS);

	glColor3d(1, 0, 0);

	glVertex3d(1, -1, 1);
	glVertex3d(-1, -1, 1);
	glVertex3d(-1, -1, 0);
	glVertex3d(1, -1, 0);

	glEnd();



	glBegin(GL_QUADS);

	glColor3d(0, 0, 1);

	glVertex3d(1, 1, 1);
	glVertex3d(-1, 1, 1);
	glVertex3d(-1, 1, 0);
	glVertex3d(1, 1, 0);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3d(0, 0.1, 0.1);

	glVertex3d(1, 1, 1);
	glVertex3d(-1, 1, 1);
	glVertex3d(0, 0, 4);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3d(0.4, 0, 0.1);

	glVertex3d(-1, 1, 1);
	glVertex3d(-1, -1, 1);
	glVertex3d(0, 0, 4);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3d(0.4, 0, 0.1);

	glVertex3d(-1, 1, 1);
	glVertex3d(-1, -1, 1);
	glVertex3d(0, 0, 4);

	glEnd();



	glBegin(GL_TRIANGLES);
	glColor3d(0.4, 0.2, 0.1);

	glVertex3d(-1, -1, 1);
	glVertex3d(1, -1, 1);
	glVertex3d(0, 0, 4);

	glEnd();



	glBegin(GL_TRIANGLES);
	glColor3d(0.9, 0.2, 0.1);

	glVertex3d(1, -1, 1);
	glVertex3d(1, 1, 1);
	glVertex3d(0, 0, 4);

	glEnd();
}



void Render(double delta_time)
{    
	for (double i = 0; i < 360; i += 6, 2) 
	{
		glPushMatrix();
		glRotated(i, 0, 0, 1);
		glTranslated(30, 0, 0);
		Figure(i);
		glPopMatrix();
	}
}   
