#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

double drand() {
	return rand() / (RAND_MAX + 1.);
}

double drand2(double a, double b) {
	return a + (b-a)*drand();
}

int irand(int i, int j) {
	return int(drand2(i, j));
}

int main() {
	srand(time(0));
	
		for (int i=0; i<10; i++) {
			cout << irand(0,10) << endl;
		}
}