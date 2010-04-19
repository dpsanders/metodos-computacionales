#include <iostream>
#include <vector>

#include <cstdlib>
using namespace std;

void f() {
	int L = 100000;
	vector<int> x(L);
	
	for (int i=0; i<L; i++) {
		x[i] = rand();
	}
	
	int suma = 0;
	for (int i=0; i<L; i++) {
		suma += x[i];
	}
	
	
	
}
int main() {
	for (int i=0; i<1000; i++) {
		f();
	}
}