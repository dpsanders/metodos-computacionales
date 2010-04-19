#include <iostream>

using namespace std;

class Vector {
	public:
		double x, y;
};

class Particle {
	public:
		Vector pos, vel;
};


int main() {
		int a;
		
		int* p = NULL;
		
		
		cout << "a = " << a << endl;

		p = &a;  // p apunta a a
		
		*p = 17;
		
		cout << "p = " << int(p) << endl;
		
		
		
		cout << "a = " << a << endl;
		
		Vector v;
		Vector* pv;
		
		pv = &v;
		
		v.x = 3;
		
		(*pv).x = 3;
		
		pv -> x = 3;
		
		Particle part;
		Particle* pp = &part;
		
		pp->pos.x = 3;
		
		
}