#include "Modelo.h"

class Metropolis {
	private:
		
		Modelo* modelo;
		double deltaH;
		
	Metropolis(Modelo* mod) : modelo(mod) {
		
	}
		
		void paso() {
				modelo -> proponerCambio();
				
				deltaH = modelo -> calcDeltaH();
				
				double r = drand();
				if ( (deltaH <= 0) || (r < exp(-beta * deltaH)) {
					modelo -> aceptarCambio();
				}
		}
		
	};