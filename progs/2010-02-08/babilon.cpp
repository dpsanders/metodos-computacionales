#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	double numero;
	double raiz;
	
	cout << "Numero y de que encontrar raiz: ";
	cin >> numero;
	
	cout << "Adivinanza inicial: ";
	cin >> raiz;
	
	int num_veces = 10;
	
	int i = 0;
	double raiz_nuevo;
	
	while (i < num_veces) {
		raiz = 0.5 * (raiz + (numero / raiz));
		cout << raiz << endl;
		i++;
// 		raiz = raiz_nuevo;
	}
	
}