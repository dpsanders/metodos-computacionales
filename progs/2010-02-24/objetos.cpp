#include <iostream>
#include <vector>

using namespace std;

class Vec {
	public:
		double x, y;
		
	
	Vec(double xx, double yy) : x(xx), y(yy){
	}
		
};

class Particula {
	public:
	
// 	double x, y;
// 	double vx, vy;
	
	Vec pos;
	Vec vel;
	
// 	Particula() : x(0), y(0), vx(1), vy(1) {   // constructor;  se llama automaticamente 
	Particula() : pos(0, 0), vel(1, 1) {
	// cuando se crea un objeto de este tipo
// 		x = 0; 
// 		y = 0;
// 		vx = 1;
// 		vy = 1;
	}
	
	Particula(double xx, double yy) : x(xx), y(yy), vx(1), vy(1) {
		
	}
	
	Particula(double xx, double yy, double vxx, double vyy) 
		: x(xx), y(yy), vx(vxx), vy(vyy) {
		
	}
	
	void inicializar(double xx, double yy, double vxx, double vyy) {
			x = xx;
			y = yy;
			vx = vxx;
			vy = vyy;
	}
	
	
	void mover(double dt) {
// 		pos.x += vel.x*dt;
// 		pos.y += vel.y*dt;
	
		pos += vel * dt;
	}
	
};


int main() {
	
	Particula p1;
	Particula p2(3, 5);
	Particula p3(-1, -1, 10, 10);
	
	cout << "La pos x de part 1 es " << p1.x << endl;
	
	p1.mover(1);
	
	cout << "La pos x de part 1 es " << p1.x << endl;
	
	int N = 10;
	
	vector<Particula> p;
	p.resize(10);
	
	for (int i=0; i<N; i++) {
		p[i].inicializar(i, i/2., 1, 1);
	}
	
	
	for (int i=0; i<N; i++) {
		cout << p[i].x << "\t" << p[i].vx << endl;
	}

	
	
	
	
	
	
	
}
