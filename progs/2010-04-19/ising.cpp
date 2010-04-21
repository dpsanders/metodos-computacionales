#include <iostream>

using namespace std;

#include "RedCuadrada.h"
#include "Ising.h"
#include "Metropolis.h"

int L = 10;

int main() {
	Ising* model;
	Metropolis* metodo;
	
	model = new Ising(L);
	
	// programa
	
	delete model;
	
	
	
}