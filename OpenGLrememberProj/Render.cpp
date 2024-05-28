#include "Render.h"
#include <math.h>
#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>



void Render(double delta_time)
{
	for (int i = 0; i <= 1; i++) {
		if (i == 1)
			glTranslated(0, 0, -5);
		//нижний треугольник
		glColor3d(0, 0, 1);
		glBegin(GL_TRIANGLES);
		glVertex3d(1, 0, 0);
		glVertex3d(0, -7, 0);
		glVertex3d(-2, 0, 0);
		glEnd();

		//левый треугольник
		glColor3d(0.517, 0.093, 0.554);
		glBegin(GL_TRIANGLES);
		glVertex3d(-2, 0, 0);
		glVertex3d(-7, 1, 0);
		glVertex3d(-3, 6, 0);
		glEnd();
		glBegin(GL_TRIANGLES);
		glVertex3d(-2, 0, 0);
		glVertex3d(0, 3, 0);
		glVertex3d(-3, 6, 0);
		glEnd();

		//середина
		glColor3d(0, 0, 1);
		glBegin(GL_TRIANGLES);
		glVertex3d(-2, 0, 0);
		glVertex3d(0, 3, 0);
		glVertex3d(1, 0, 0);
		glEnd();

		//правый треугольник
		glColor3d(0, 1, 0);
		glBegin(GL_TRIANGLES);
		glVertex3d(1, 0, 0);
		glVertex3d(6, 6, 0);
		glVertex3d(9, 2, 0);
		glEnd();
		glBegin(GL_TRIANGLES);
		glVertex3d(1, 0, 0);
		glVertex3d(0, 3, 0);
		glVertex3d(6, 6, 0);
		glEnd();
	}

	//низ
	glTranslated(0, 0, 5);
	glColor3d(0, 0, 1);
	glBegin(GL_QUADS);
	glVertex3d(1, 0, 0);
	glVertex3d(1, 0, -5);
	glVertex3d(0, -7, -5);
	glVertex3d(0, -7, 0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-2, 0, 0);
	glVertex3d(-2, 0, -5);
	glVertex3d(0, -7, -5);
	glVertex3d(0, -7, 0);
	glEnd();

	//лево
	glColor3d(0.517, 0.093, 0.554);
	glBegin(GL_QUADS);
	glVertex3d(0, 3, 0);
	glVertex3d(0, 3, -5);
	glVertex3d(-3, 6, -5);
	glVertex3d(-3, 6, 0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-2, 0, 0);
	glVertex3d(-2, 0, -5);
	glVertex3d(-7, 1, -5);
	glVertex3d(-7, 1, 0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(-7, 1, 0);
	glVertex3d(-7, 1, -5);
	glVertex3d(-3, 6, -5);
	glVertex3d(-3, 6, 0);
	glEnd();

	//право
	glColor3d(0, 1, 0);
	glBegin(GL_QUADS);
	glVertex3d(1, 0, 0);
	glVertex3d(1, 0, -5);
	glVertex3d(9, 2, -5);
	glVertex3d(9, 2, 0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(0, 3, 0);
	glVertex3d(0, 3, -5);
	glVertex3d(6, 6, -5);
	glVertex3d(6, 6, 0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3d(9, 2, 0);
	glVertex3d(9, 2, -5);
	glVertex3d(6, 6, -5);
	glVertex3d(6, 6, 0);
	glEnd();




}