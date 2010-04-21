#include "RedCuadrada.h"

class Modelo {
	private:
		RedCuadrada* red;
		
	public:
		Modelo(int LL) : L(LL) {
			red = new RedCuadrada(L);
		}
		
		virtual int calcEnergia() = 0;
		
		
		
		virtual int calcMag() = 0;
		
		virtual void proponerCambio() = 0;
		
		virtual void aceptarCambio() = 0;
		
		virtual void calcDeltaH() = 0;
		
};