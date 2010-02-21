#include <iostream> 
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[ ] ) {
	cout << "Hay " << argc << " argumentos" << endl;
	for (int i=0; i<argc; i++ ) {
		cout << argv[ i ] << endl;
	}
	
	int num_caminantes = atoi(argv[1]); 
	cout << "num_caminantes = " << num_caminantes << endl;
	int b = atoi(argv[2]);
	double c = atof(argv[3]);
	
	cout << " b =  " << b << "; c = " << c << endl;
	
	vector<int> x;
	x.resize(num_caminantes);
	
}