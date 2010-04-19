#include <iostream>
#include <cstdio>

using namespace std;

int main() {
		FILE* gp;		// gp es el objeto que a gnuplot -- cf. ofstream
		
		gp = popen("gnuplot -persist", "w");  //popen abre una "pipe" (tuberia)
		
		fprintf(gp, "set term x11\n");
		
		for (double a=0.0; a<10.0; a+=0.01) {
// 			fprintf(gp, "plot sin(x+%g)\n", a);
// 			printf("plot sin(x+%g)\n", a);
			
			fflush(gp);	
		}
}