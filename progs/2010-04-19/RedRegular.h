#ifndef RedRegular_h
#define RedRegular_h

#include <vector>

using namespace std;

// Effective C++,  de  Scott Meyers (3a edicion)

class RedRegular : public Red {
	private:
// 	vector<int> red;
// 	vector<vector<int>  > vecinos;
	
	int L;
// 	int N;
	int z;
	
	public:
		RedCuadrada(int LL) : L(LL), N(LL*LL) {
			red.resize(L);
			z = 4;
			vecinos.resize(L, vector<int>(z) );
			
			inicializar();
			
		}
		
		void inicializar() {
		// inicializa el arreglo de vecinos	
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
		
		int num_conexiones(int espin) {
			return z;
		}
};







#endif

