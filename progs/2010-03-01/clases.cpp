#include <iostream>
#include <fstream>

using namespace std;

class Vec 
{
	private:
		double x, y;
		
	public:
		Vec(double xx, double yy)  : x(xx), y(yy)
		{
		}
	
	Vec& operator+=( const Vec& v ) {
		x += v.x;
		y += v.y;
		
		return *this;
	}
	
	friend ostream& operator<<(ostream& os, const Vec& v);
	friend Vec operator*(const Vec& v, double a);
	friend Vec operator*(double a, const Vec& v);
	
		
};

Vec operator*(const Vec& v, double a) {
		return Vec(v.x * a, v.y * a);
}

Vec operator*(double a, const Vec& v) {
	return Vec(v.x * a, v.y * a);
}


ostream& operator<<(ostream& os, const Vec& v) {
	os << "(" << v.x << ", " << v.y << ")";
	return os;
}

class Particula {
	
	public:
	
		Vec posicion;
		Vec velocidad;
	
	Particula(double x1, double x2, double v1, double v2) :
		posicion(x1, x2), velocidad(v1, v2) {
	}
		
	void mover(double dt) {
 		posicion += velocidad * dt;
		posicion += dt * velocidad;
	
	}
		
	// a += b   EQUIVALENTE A   a.operator+=(b)
		
};

int main() {
	Particula p(1.,2.,3.,4);
	
// 	cout << "Pos = " << p.posicion.x << "\t" << p.posicion.y << endl;
	p.mover(0.1);
// 	cout << "Pos = " << p.posicion.x << "\t" << p.posicion.y << endl;
	
	cout << p.posicion << endl;
	
	ofstream salida("hola.dat");
	salida << p.posicion << endl;
}