#include "stdlib.h"
#include "gl/glut.h"
#include "math.h"

const double PI = 3.141592653589793;
int i;

void back(){
glBegin(GL_QUADS);
glColor3f(1,1,1);
  glVertex2d (-150,150);
  glVertex2d(150,150);
  glVertex2d(150,-150);
  glVertex2d (-150,-150);
glEnd();
}

void ellips(float rx, float ry, float xc, float yc, int n){
	glBegin( GL_POLYGON);
            double t;
            for  (int i=0;  i < n;  ++i) {
                	t = i * 2.0 * 3.14159 / n;
                	glVertex2f( rx*cos(t)+xc, ry*sin(t)+yc );
            }
  	glEnd();
}

void lingkaran(int radius, int jumlah_titik, int x_tengah, int y_tengah) {
 glBegin(GL_POLYGON);
 for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
  glVertex2f(x,y);
 }
 glEnd();
}


void Draw() {
 glClear(GL_COLOR_BUFFER_BIT);
 back();
 glColor3f(0.0, 0.0, 1.0); //badan biru
    lingkaran(30,50,7,2);

 glColor3f(1,1,1); //border
     ellips(16,21,7,28,50);

 glColor3f(0,0,1); //kepala hitam
     ellips(15,20,7,28,50);

 glColor3f(0.0, 0.0, 1.0);
 glBegin(GL_POLYGON); //kaki kanan
     glVertex2f(24,-20);
     glVertex2f(21,-20);
     glVertex2f(21,-40);
     glVertex2f(24,-40);
     glEnd ();

 glBegin(GL_POLYGON); //kaki kiri
     glVertex2f(-9,-20);
     glVertex2f(-6,-20);
     glVertex2f(-6,-40);
     glVertex2f(-9,-40);
     glEnd ();

 glColor3f(0.5,0,0); //mulut
     ellips(4,3,7,15,50);

 glColor3f(1,1,1); //mata kanan
     ellips(3,4,12,34,50);

 glColor3f(1,1,1); //mata kiri
     ellips(3,4,2,34,50);

 glColor3f(0.5,0,0); //dalamnya mata kiri
     ellips(2,2,2,32,50);

 glColor3f(0.5,0,0); //dalamnya mata kanan
     ellips(2,2,12,32,50);

 glColor3f(0.5, 0.0, 0.0); //hidung kiri
    lingkaran(1,50,6,24);

 glColor3f(0.5, 0.0, 0.0); //hidung kanan
    lingkaran(1,50,8,24);

 glColor3f(0,0,0); //telinga
     ellips(1.3,2.3,5,50,36.0);
     ellips(1.3,2.3,9,50,36.0);

 glColor3f(0,0,1); //telinga
     ellips(5,3,20,45,36.0);
     ellips(5,3,-6,45,36.0);

glFlush();

}


int main(int argc, char **argv) {
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(500, 500);
 glutInitWindowPosition(0, 0);
 glutCreateWindow("Kambing_Kharismaharani Aisyah P");
 gluOrtho2D(-60., 70., -60., 70.);
 glutDisplayFunc(Draw);
 glutMainLoop();
 return 0;
}
