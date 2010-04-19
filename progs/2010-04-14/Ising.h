#include "RedCuadrada.h"

class Ising : public Modelo {
	
	private:
// 	RedCuadrada* red;
	
	int espin_que_voltear;
	int valor_actual;
	int L;
	
	public:
	
	Ising(int LL) : L(LL) {
// 		red = new RedCuadrada(L);
	}
	
	~Ising() {
		delete red;
	}
		
		
	int calcEnergia() {
	}
	
	

	int calcMag() {
	}
	
	void proponerCambio() {
		espin_que_voltear = irand(0, N);
		valor_actual = red -> valor(espin_que_voltear);
	}
	
	void aceptarCambio() {
		red -> cambiarValor(espin_que_voltear, -valor_actual);
	}
	
	void calcDeltaH() {
	}
		

};