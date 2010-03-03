// OpenGL y GLUT basicos
// Compilar con la opcion -lglut  para ligar con la libreria de GLUT

#include <GL/glut.h>
#include <iostream>

using namespace std;

void display() {
    
    glClear(GL_COLOR_BUFFER_BIT);        // limpiar pantalla
    glBegin(GL_TRIANGLES);                      // prepararse para dibujar un triangulo
    
    glVertex2f(0.0,0.0);                                // especificar un vértice en 2D, que consiste en números flotatntes
    glVertex2f(0.5,0.0);
    glVertex2f(0.5,0.5);
    
    glEnd();                                                // terminar de dibujar el triángulo
    glFlush();                                              // mandar los comandos ya
    
}

int main(int argc, char** argv) {
    glutInit(&argc,argv);    // inicialisar glut
    
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // lista de opciones con '|' (= o)
    
    glutInitWindowSize(300,300);
    glutInitWindowPosition(200,200);
    glutCreateWindow("Primero");    // se puede dar un título a la ventana que se crea
    
    glutDisplayFunc(display);           // decirle a glut cual función usar para desplegar 
    
    glutMainLoop();                         // entrar en el bucle principal de glut
    
}
