#include <iostream>

#include <blitz/array.h>

using namespace std;
using namespace blitz;


Array<int, 2>* crear_red(int L) {
	Array<int, 2>* p = new Array<int, 2>(L, L);
	return p;
}

void modificar(Array<int, 2>& red)
{
}


int main() {
	
	Array<int, 2>* red;
	
	red = crear_red(100);
	
	cout << *red;
	
	cout << red(10,20) ;
}