#include <iostream>

#include <map>
#include <string>

using namespace std;

int main() {
	map<string, double> pesos;
	
	cout << pesos.size() << endl;
	
	pesos["H"] = 1.008;
	
	cout << pesos.size() << endl;
	
	pesos["H"] = 1.009;
	
	cout << pesos.size() << endl;
	
	cout << pesos["He"] << endl;
	
	cout << pesos.size() << endl;
	
	pesos.erase("He");
	cout << pesos.size() << endl;
	
// 	
}