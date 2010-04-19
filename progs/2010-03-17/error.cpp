#include <iostream>
#include <vector>

using namespace std;

void f() {
	vector<int> x(10);
	// // 	vector<int> y(10000);
	
	// 	cout << "Aqui\n";
	for (int i=0; i<100000; i++) {
		x[i] = i;
		// 		cout << x[i] << endl;
		// 		x.at(i) = i;
	}
	
}
int main() {
	f();
}