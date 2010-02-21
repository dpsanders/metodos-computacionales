#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;


void print(const vector<int>& v) {
	for (int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(int argc, char *argv[]) {
	vector<int> configuracion;
	
// 	int L = 30;
	int L = atoi(argv[1]);	
	configuracion.resize(L);
	
	// Inicializacion:
	for (int i=0; i<L; i++) {
		configuracion[i] = 0;
	}
	
	// Bucle principal:
	
// // 	print(configuracion);
	
	bool terminado = false;
	
	int num_configs = 0;
	while (terminado == false) {
		
// 		print(configuracion);
		num_configs ++;
		
		for (int i=0; i<L; i++) {
			if (configuracion[i] == 0) {
				configuracion[i] = 1;
				break;
			}
			
			configuracion[i] = 0;
			if (i==L-1) {
				terminado = true;
			}
		}
			
	}
		
	cout << "Numero total de configs: " << num_configs << endl;
	
}
	