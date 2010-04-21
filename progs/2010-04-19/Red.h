#ifndef Red_h
#define Red_h

#include <vector>

using namespace std;

// Effective C++,  de  Scott Meyers (3a edicion)

class Red {
	public:
	vector<int> red;   // contenido de cada sitio
	vector<vector<int>  > vecinos;   // listas de vecinos de cada sitio

	int N;
	int z;
	
	public:
		Red(int NN) : N(NN) {
			red.resize(N);
// 			vecinos.resize(L, vector<int>(z) );
		}
		
		int valor(int espin) {
			return red[espin];
		}
		
		void cambiarValor(int espin, int valor) {
			red[espin] = valor;
		}
		
		int vecino(int espin, int cual) {
			return vecinos[espin][cual];
		}
		
		virtual int num_conexiones(int espin) {
			return vecinos[espin].size();
		}
};

#endif

