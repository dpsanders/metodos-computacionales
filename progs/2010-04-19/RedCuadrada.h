#ifndef RedCuadrada_h
#define RedCuadrada_h

#include <vector>

using namespace std;

// Effective C++,  de  Scott Meyers (3a edicion)

class RedCuadrada : public RedRegular {
	private:
// 	vector<int> red;
// 	vector<vector<int>  > vecinos;
	
	int L;
// 	int N;
// 	int z;
	
	public:
		RedCuadrada(int LL, int cond_front) : L(LL), RedRegular(LL*LL) {
// 			red.resize(L);
			z = 4;
// 			vecinos.resize(L, vector<int>(z) );
			
			inicializar();
			
		}
		
		void inicializar() {
		// inicializa el arreglo de vecinos	
		}
		
	
};







#endif

