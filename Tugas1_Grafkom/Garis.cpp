#include <GL/glut.h>
#include <math.h>
void display(void)
{
glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
glClear (GL_COLOR_BUFFER_BIT);

glPushMatrix ();
glClearColor(1,1,1,0);
glColor3f(1,1,1); //
glBegin(GL_LINES);
glVertex3f(0,0,0.0);
glVertex3f(6.4,2.1,0.0);
glEnd ();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("GARIS");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
