// OpenGL y GLUT basicos
// Compilar con la opcion -lglut  para ligar con la libreria de GLUT

// Compilar con
// -framework OpenGL -framework GLUT   en Mac

// OpenGL:  Open Graphics Library  -- hace los dibujos
// GLUT: Graphics Library Utility Toolkit --= hace las ventanas

#include <GL/glut.h>
//#include <GLUT/glut.h>  // MAC
#include <iostream>

#include <cstdlib>

double desplazamiento;

using namespace std;

void display() {
    
	static float desplazamiento = 0.0;
	static float angulo = 0.0;
	desplazamiento += 0.01;
	angulo += 0.05;
	
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);        
	// limpiar pantalla
    
	double L=1;
	
// 	glPushMatrix();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(-L/2., -L/2., -L/2.);
	glRotatef(angulo, 0.5, 0.5, 0.5);
	
	
	
// 	glBegin(GL_POLYGON);                      // prepararse para d	ibujar un triangulo
// 	glColor3f(1., 0., 0.);
	
//     glVertex2f(0.0 + desplazamiento,0.0);                                // especificar un vértice en 2D, que consiste en números flotatntes
// 	glVertex2f(0.5+ desplazamiento,0.0);
// 	glVertex2f(0.5+ desplazamiento,0.5);
// 	glVertex2f(1.0+ desplazamiento, 1.0);
//     
//     glEnd();                                                // terminar de dibujar el triángulo

	
	// cubo:
// 	double L = 1;
	glColor4f(1., 0., 0., 0.5);
	
	glBegin(GL_POLYGON);                      // prepararse para dibujar un triangulo
	
	glVertex3f(0., 0., 0.);
	glVertex3f(L, 0, 0.);
	glVertex3f(L, 0, L);
	glVertex3f(0., 0.,L);

	glEnd();
	
	glColor4f(0, 1., 0., 0.2);
	
	glBegin(GL_POLYGON);                      // prepararse para dibujar un triangulo
	
	glVertex3f(0, 0., 0.);
	glVertex3f(0, L, 0.);
	glVertex3f(0, L, L);
	
	glColor3f(1., 0., 1.);
	
	glVertex3f(0, 0., L);
	
	glEnd();
	
	
	glColor4f(0, 0., 1., 0.5);
	
	glBegin(GL_POLYGON);                      // prepararse para dibujar un triangulo
	
	glVertex3f(0, 0, 0.);
	glVertex3f(0, L, 0.);
	glVertex3f(L, L, 0);
	glVertex3f(L, 0., 0);
	
	glEnd();

	glColor4f(0, 0.3, 1., 0.4);
	glutWireCube(0.3);
	
	/*
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt (-5, -5, -5,
			   0.0, 0.0, 0.0,
			   0.0, 1.0, 0.0);*/

	glFlush();                                              // mandar los comandos ya
    
	
	
	
// 	glPopMatrix();
	
// 	desplazamiento += 0.001;
// 	if (desplazamiento > 1)
// 		desplazamiento = 0.0;
// 	glutSwapBuffers();
}

void actualizar() {
		desplazamiento += 0.001;
		
		glutPostRedisplay();
		glutSwapBuffers();
}

void depth() {

	glEnable(GL_DEPTH_TEST);
	glEnable(GL_BLEND);
	
}

void inic_glut(int argc, char** argv) {
	glutInit(&argc,argv);    // inicialisar glut
	
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH | GLUT_ALPHA);
	// lista de opciones con '|' (= o)
	
	
	
	glutInitWindowSize(300,300);
	glutInitWindowPosition(200,200);
	glutCreateWindow("Primero");    // se puede dar un título a la ventana que se crea
	
	// Sistemas de coordenadas:;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
// 	glMatrixMode(GL_MODELVIEW);
	
	glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	
// 	gluLookAt (5, 5, 5,
// 			   0.0, 0.0, 0.0,
// 			   0.0, 1.0, 0.0);
			   
	
}

void teclado(unsigned char tecla, int x, int y) {
	
	switch(tecla) {
		case 'q':
			exit(0);
			break;
			
		case 'd': case 'D':
			cout << "(" << x << ", " << y << ")\n";
			break;
			
		case 'h':
			cout << "Hola" << endl;
			break;
			
			
	}
	
// 	if (tecla == 'q') {
// 		exit(0);
// 	}
// 	
// 	else if (tecla == 'd') {
// 		cout << "(" << x << ", " << y << ")\n";
// 	}
// 	
}

void raton(int boton, int estado, int x, int y) {
		switch (boton) {
			case GLUT_LEFT_BUTTON:
				if (estado == GLUT_DOWN) {
					glutIdleFunc(actualizar);
				}
				break;
				
			case GLUT_RIGHT_BUTTON:
				if (estado == GLUT_DOWN) {
					glutIdleFunc(NULL);
				}
				break;
			
			default:
				break;
		}
}


int main(int argc, char** argv) {
    
	inic_glut(argc, argv);
	
    glutDisplayFunc(display);           // decirle a glut cual función usar para desplegar 
    
	glutIdleFunc(actualizar);

	glutKeyboardFunc(teclado);
	glutMouseFunc(raton);
	
	depth();
	
	
	desplazamiento = 0.0;

    glutMainLoop();                         // entrar en el bucle principal de glut
    
}
