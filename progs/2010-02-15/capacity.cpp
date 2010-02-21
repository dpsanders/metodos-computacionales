#include <iostream>
#include <vector>

using namespace std;


template<class T> 
T  promedio (const vector<T>& x) {
	T suma = 0;
	for (int i=0; i < x.size(); i++ ) {
		suma += x[i];	
	}
	return suma / double(x.size());
}

void f(int& a) {    // referencia: a es un alias de b
	cout << "a = " << a << endl;
	a = 3;
	cout << "a = " << a << endl;
}


int main() {
	vector<int> x;
	vector<double> y;
	
	int b = 7;
	f(b);
	cout << "b = " << b << endl;
	
	y.push_back(3.3);
	y.push_back(4.7);
	
	cout << "Prom de y = " << promedio(y) << endl;
	
	
	
// 	cout << x.size() << " \t" << x.capacity() << endl;
	
	for (int i=0; i<100; i++) {
// 		cout << i << "; size = " << x.size() 
// 				<< "; capacity = " << x.capacity() << endl;

		x.push_back(i);
	
	}	
	
	int N = 100;
	x.resize(N);
	
	for (int i=0; i<N; i++ ){
		x[i] = i*i;
	}
	
	promedio(x);
	
}