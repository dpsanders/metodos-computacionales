#include <iostream>
#include <cmath>

using namespace std;

int main() {
// 	cout << "Hola, mundo!" << endl;
	
	int a;
	double b;
	char c;
	a = 3.9;
	b = -10.5;
	
	c = 'h';
	cout << "a = " << a << "; b = " << b << "c=" << c <<  endl;
	
	if (a < 0) {
		cout << "negativo" << endl;
		cout << "" << endl;
	}
	
	else {
		cout << " pos" << endl;
		}
		
		if ( (a<0) && (b<0) ) {
			cout << "a y b neg\n";
		}
		
		else {
		}
		
		int i = 0;
		while (i < 10) {
			cout << "i= " <<  i << endl;
			i++;
		}
		
// 		cin >> y;
		cout.precision(16);
		
		cout << sqrt(10) << endl;
		
		
		cout << double(1) / 2 << endl;
		
	// 	while () {
	// 	}
		
	// 	int c=3;
// 	

	return 0;
}