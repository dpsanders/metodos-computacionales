#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	
	int N = 10;
	
	ostringstream nombre;
	
	nombre << "datos_N" << N << ".dat";
	
	cout << "nombre =" << nombre.str() << endl;
	
	ofstream salida (nombre.str().c_str(), ios::app );	// declara salida como un output file stream
// 	archivo.open("datos.dat");

	
	cout << "salida =" << salida << endl;
	
	cout << "Hola" << endl;
	salida << "Hola" << endl;
	int a = 3;
	salida << a << "\t" << a*a << endl;
	
	salida.close();
	
	
	ifstream entrada ("datos.dat");
	
	
// 	for (int i=0; i<3; i++) {
// 		int b;
// 		entrada >> a >> b;
// 		cout << "a=" << a << "; b=" << b << endl;
// 	}
// 	
	string s;
	
// 	while (entrada >> s)  {
// 		cout << s << endl;
// 	}

	int b;
	istringstream linea;
	while (getline(entrada, s)) {
		cout << s << endl;
		
// 		istringstream linea (s);
	linea.clear();
	linea.str(s);
		linea >> a >> b;
		cout << a << "; " << b << endl;
		
	}
}