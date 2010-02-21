#include <iostream>
#include <cstdlib>
#include <ctime>

#include "alea.h" 

using namespace std;


int main() {
	
	srand(time(0));
// 	cout << time(0) << endl;

// 	int num_caminantes = 100;
// 	for (int n=0; n < num_caminantes; n++) {
	
		int num_pasos = 100;
		int posicion = 0;
		
		for (int i=0; i < num_pasos; i++) {
			double r = drand();
			
			if (r < 0.5) {
				posicion --;
			}
			else {
				posicion ++;
			}
			
			cout << i << "\t" << posicion << endl;
			
		}
		
// 		cout << "\n\n";
// 	}
}

