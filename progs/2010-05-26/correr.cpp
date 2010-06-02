#include <sstream>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	
	ostringstream nombre;
	
	
	int E_min = 10, E_max = 20;
	nombre << "./wl "  << E_min << " " << E_max << endl; 
	
	system(nombre.str().c_str());
	
}