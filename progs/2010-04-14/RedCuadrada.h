#ifndef RedCuadrada_h
#define RedCuadrada_h

#include <vector>

using namespace std;

// Effective C++,  de  Scott Meyers (3a edicion)

class RedCuadrada {
	private:
	vector<int> red;
	vector<vector<int>  > vecinos;
	
	int L;
	int N;
	int z;
	
	public:
		RedCuadrada(int LL) : L(LL), N(LL*LL) {
			red.resize(L);
			z = 4;
			vecinos.resize(L, vector<int>(z) );
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
};







#endif

