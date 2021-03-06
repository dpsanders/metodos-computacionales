#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Vec 
{
	private:
		vector<double> v;
		int n;
		
	public:
		Vec(int nn) : n(nn)
		{
			v.resize(n);
		}
		
		Vec() : n(10)
		{
			v.resize(n);
		}
		
		
		int size() {
			return v.size();
		}
	
	Vec& operator+=( const Vec& v2 ) {
		
		for (int i=0; i<n; i++) {
			v[i] += v2.v[i];
		}
		
		return *this;
	}
	
	friend ostream& operator<<(ostream& os, Vec& v);
	friend Vec operator*(Vec& v, double a);
// 	friend Vec operator*(double a, const Vec& v);
	
		
};

Vec operator*(Vec& v, double a) {
		Vec v_nuevo(v.size());
		
// 		v_nuevo.resize(n);
		
		for (int i=0; i<v.size(); i++) {
			v_nuevo.v[i] = v.v[i] * a;
		}
			
		return v_nuevo;	
		
}

// Vec operator*(double a, const Vec& v) {
// 	return Vec(v.x * a, v.y * a);
// }d
ostream& operator<<(ostream& os, Vec& v) {
	os << "(" ;
	for (int i=0; i<v.size()-1; i++) {
		os << v.v[i] << ", ";
	}
	os << v.v.back() << ")";
	
	return os;
}

class Particula {
	
	public:
	
		Vec posicion(3);
		Vec velocidad(3);
	
// 	Particula(double x1, double x2, double v1, double v2) :
// 		posicion(x1, x2), velocidad(v1, v2) {
// 	}
		
	void mover(double dt) {
 		posicion += velocidad * dt;
// 		posicion += dt * velocidad;
	
	}
		
	// a += b   EQUIVALENTE A   a.operator+=(b)
		
};

int main() {
// 	Particula p(1.,2.,3.,4);
Particula p;
	
// 	cout << "Pos = " << p.posicion.x << "\t" << p.posicion.y << endl;
	p.mover(0.1);
// 	cout << "Pos = " << p.posicion.x << "\t" << p.posicion.y << endl;
	
	cout << p.posicion << endl;
	
// 	ofstream salida("hola.dat");
// 	salida << p.posicion << endl;
}