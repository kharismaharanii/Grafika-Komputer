#include <gl/glut.h>
#include <windows.h>
#include <math.h>

const double PI = 3.141592653589793;
int i,radius,jumlah_titik,x_tengah,y_tengah;
void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_LINE_LOOP);
	radius=40;
	jumlah_titik=20;
	x_tengah=50;
	y_tengah=50;
	for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
		glVertex2f(x/100,y/100);


	}
	glEnd();


	glFlush();
}

void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Lingkaran");
	Initialize();
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}
