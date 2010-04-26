#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

void print(ostream& archivo, vector<int>& v) {
	for (int i=0; i<v.size(); i++) {
		archivo << v[i] << " ";
	}
	archivo << endl;
}

void f(int* p) {
		*p = 3;
}


int main() {
	int L = 10;
	vector<int> v(L);
	
	for (int i=0; i<L; i++) {
		v[i] = i;
	}
	
	print(cout, v);
	
	v.erase( v.begin() + 3, v.begin() + 6 );
	
	print(cout, v);
	
	vector<int> :: iterator  it;  // variable ' it'  que es un iterador del contendor
	
	it = find (v.begin(), v.end(), 7 );
	
	cout << "Elemento es " << *it << endl;
	
	v.erase( it );
	
	print(cout, v);
	
	ofstream misalida("hola.dat");
	
	print(misalida, v);
	
	
	
	
	
	
	
	
	
	
	
	
}