#include <cstdlib>
#include <iostream>
#include <GL/glut.h>

void dasar()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_POLYGON);
 //alas
 glColor3f(1,1,0);
 glVertex3f(-500.,-400.,0);
 glVertex3f(-650.,0.,0);
 glVertex3f(480.,150.,0);
 glVertex3f(660.,-200.,0); 
 glEnd();
 
 //tembok
 glBegin(GL_POLYGON);
 //1
 glColor3f(0,1,0);
 glVertex3f(-650.,0.,0); 
 glVertex3f(-650.,200.,0);
 glVertex3f(480.,350.,0);
 glVertex3f(480.,150.,0);
 glEnd();
 //1-1
 glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex3f(-645.,-10.,0);
 glVertex3f(-645.,190.,0);
 glVertex3f(485.,340.,0);
 glVertex3f(485.,140.,0);
 glEnd();
 //1-1-1
 glBegin(GL_POLYGON);
 glColor3f(0,1,0);
 glVertex3f(-650.,0.,0);
 glVertex3f(-650.,200.,0);
 glVertex3f(-645.,-10.,0);
 glVertex3f(-645.,190.,0);
 glEnd();
 //1-1-1-1
 glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex3f(-650.,200.,0);
 glVertex3f(-645.,190.,0);
 glVertex3f(480.,350.,0);
 glVertex3f(485.,340.,0);
 glEnd();
 
 //2
 glBegin(GL_POLYGON);
 glColor3f(0,1,0);
 glVertex3f(-645.,-10.,0);
 glVertex3f(-645.,190.,0);
 glVertex3f(-500.,-200.,0);
 glVertex3f(-500.,-400.,0);
 glEnd();
 //2-1
 glBegin(GL_POLYGON);
 glColor3f(0,1,0);
 glVertex3f(-640.,-9.,0);
 glVertex3f(-640.,189.,0);
 glVertex3f(-495.,-200.,0);
 glVertex3f(-495.,-400.,0);
 glEnd();
 //2-1-1
 glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex3f(-640.,190.,0);
 glVertex3f(-645.,190.,0);
 glVertex3f(-495.,-200.,0);
 glVertex3f(-500.,-205.,0);
 glEnd();
 //2-1-1-1
 glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex3f(-500.,-400.,0);
 glVertex3f(-500.,-205.,0);
 glVertex3f(-495.,-200.,0);
 glVertex3f(-495.,-400.,0);
 glEnd();
glFlush();
}

void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
 dasar();     
}


int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitWindowSize( 700,700 );       
  glutCreateWindow("denah"); 
  gluOrtho2D(-700.,700.,-700.,700.);
  glutDisplayFunc(display);                                   
  glutMainLoop(); 
}
