#include <iostream>
#include <cmath>
#include <ctime>

#include "alea.h"



using namespace std;

int main() {
	int x, y;
	
	srand(time(0));
	
	double r = drand();
	
	if (r < 0.25) {
		x ++;
	}
	
	else if (r<0.5) {
			y++;	
	}
	
	else if (r< 0.75) {
		x--;
	}
	
	else {
		y--;
	}
		
	int a = irand(0,2);
	
	cout << "a=" << a << endl;
	
	
}