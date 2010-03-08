// OpenGL y GLUT basicos
// Compilar con la opcion -lglut  para ligar con la libreria de GLUT

// Compilar con
// -framework OpenGL -framework GLUT   en Mac

#include <GL/glut.h>
//#include <GLUT/glut.h>  // MAC
#include <iostream>

using namespace std;

void display() {
    
	static float desplazamiento = 0.0;
	
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);        
	// limpiar pantalla
    
	glPushMatrix();
	glTranslatef(desplazamiento, 0., 0.);
	
	glBegin(GL_POLYGON);                      // prepararse para dibujar un triangulo
    
	
	glColor3f(1., 0., 0.);
	
    glVertex2f(0.0,0.0);                                // especificar un vértice en 2D, que consiste en números flotatntes
    glVertex2f(0.5,0.0);
    glVertex2f(0.5,0.5);
	glVertex2f(1.0, 1.0);
    
    glEnd();                                                // terminar de dibujar el triángulo
    glFlush();                                              // mandar los comandos ya
    
	glPopMatrix();
	
	desplazamiento += 0.001;
	if (desplazamiento > 1)
		desplazamiento = 0.0;
// 	glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc,argv);    // inicialisar glut
    
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // lista de opciones con '|' (= o)
    
    glutInitWindowSize(300,300);
    glutInitWindowPosition(200,200);
    glutCreateWindow("Primero");    // se puede dar un título a la ventana que se crea
    
	
	
    glutDisplayFunc(display);           // decirle a glut cual función usar para desplegar 
    
	glutIdleFunc(display);
    glutMainLoop();                         // entrar en el bucle principal de glut
    
}
