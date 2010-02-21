#include <cstdlib>

double drand() {
	return rand() / (RAND_MAX + 1.0);
}

double drand(double a, double b) {
	return a + (b-a)*drand();
}

int irand(int i, int j) {
	// Regresa entero aleatorio entre i y j, no incluyendo a j
	
	return int( floor( drand(i, j)) );
}