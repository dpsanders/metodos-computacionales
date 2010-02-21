#include <iostream>
#include <cmath>
#include <ctime>

#include <vector>

#include "alea.h"



using namespace std;

int main() {
	int d = 3;
	vector<int> x(d);
	
	srand(time(0));
	
	for (int i=0; i<1000; i++) {
		
		int direccion = irand(0, d);
		
		double r = drand();
		
		if (r < 0.5) {
			x[direccion] --;
		}
		
		else {
			x[direccion] ++;
		}
		
// 		cout << x[0] << "\t"  << x[1] << endl;
		
		for (int i=0; i<d; i++) {
				cout << x[i] << "\t";
		}
		cout << endl;
		
	}
	
}