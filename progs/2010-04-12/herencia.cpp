#include <iostream>

using namespace std;

class Vec {
	public:
	double x, y;
};

class Objeto {
	public:
		Vec pos;
		Vec vel;
		
	/*virtual void mover(double dt) {
		pos.x = pos.x + dt * vel.x;
		
		cout << "mover() de Objeto" << endl;
}*/

// 	virtual void mover(double dt) = 0;
	
};

class Rectangulo : public Objeto {
	
	private:
	
	double lado, altura;
	
	public:
	void mover(double dt) {
		cout << "mover() de Rect" << endl;
	}
};

class Disco : public Objeto {
	public:
	double radio;
	
	void mover(double dt) {
	cout << "mover() de Disco"  << endl;	
	}
};

class Punto : public Objeto {
	
};

int main () {
// 	Objeto obj;
// 	Rectangulo rect;
// 	Disco disc;
// 	
// 	obj.mover(0.1);
// 	rect.mover(0.1);
// 	
	Objeto* p;
// 	p = &disc;
// 	
// 	p = &rect;
// 	
	int tipo;
	cout << "Dame tipo: ";
	cin >> tipo;
	
	cout << "tipo = " << tipo << endl;
	
	if (tipo==0) {
		p = new Disco;
	}
	else if (tipo == 1) {
		p = new Rectangulo;
	}
	else if (tipo == 2) {
		p = new Punto;
	}
	else {
		p = new Objeto;
	}
	
	
	// (*p).mover();   // no utilizar
	p -> mover(0.1);
	
	
}

