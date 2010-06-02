#include <iostream>


const int dim = DIMENSION;

using namespace std;

// plantilla de funcion
template<typename T>
T cuad(T x) {
	return x*x;
}

template<typename T, int d>
class Vec {
	public:
	T datos[d];
	
/*	T operator[](int i) {
		return datos[i];
	}*/
	
	T& operator[](int i) {
		return datos[i];
	}

// 	operador[](int 
	
};


template<typename T, int dim>
Vec<T, dim> operator+ (Vec<T, dim>& v1, Vec<T, dim>& v2) {
	Vec<T, dim> temp;
	for (int i=0; i<dim; i++) {
			temp[i] = v1[i] + v2[i];
	}
	return temp;
}

template<int dim>
class Particula {
	private:
		Vec<double, dim> pos;
		Vec<double, dim> vel;
};

int main() {
	cout << cuad(3) << endl;
	cout << cuad(3.5) << endl;
	
// 	Vec<double> v;
	
// 	Vec< Vec <double> > M;
	
// 	M.x.x = 3;
// 	M.x.y = 2;
// 	M.y.x = 1;
// 	M.y.y = 17;
// 	
	Vec<double, dim> v;
	
	
	v[2] = 1.;
	cout << v[2] << endl;
	
	Vec<double, dim> suma;
	suma = v+v;
	
	Vec<double, dim> hola;
	
	hola = hola+v;
	
	
	Particula<2> p;
// 	Particula<2> p2;
	
// 	p.pos += p.vel * dt;
	
	
	
	
	
	
	
	
	
}