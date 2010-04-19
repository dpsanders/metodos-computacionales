#include <iostream>

using namespace std;

#include <blitz/array.h>
#include <blitz/tinyvec.h>
#include <blitz/tinyvec-et.h>
#include <blitz/tinymat.h>


using namespace blitz;

int main() {
	
	TinyVector<double, 3> a(1., 1., 1.);
	TinyVector<double, 3> b(2., 3., 4.);
	TinyVector<double, 3> c;
	
	c = a + b;
	
	c[2] = 103.;
	c(0) = -1;
	
	cout << "c = " << c << endl;
	
	cout << "prod esc = " << dot(a, b) << endl;
	cout << "prod cruz = " << cross(a, b) << endl;
	
	TinyVector<double, 3> d;
	
	d = 3, 2, 1;
	
	
	Array<double, 2> M(2, 3), N(2,3);
	
	cout << M << endl;
	
	M = 1, 2, 3, 
			4, 5, -7;
	
	cout << M << endl;
	
	N = M*2;
			
	M += N;
	
	cout << M << "\n" << N << endl;
	
	cout << "M = " << M << endl;
	cout << M(1,2) << endl;
	M(1,2) = 100;
	cout << "M = " << M << endl;
	
	Array<double, 2> m(2,2), n(2,2), p(2,2);
	
	m = 1;
	n = 2;
	
	p = m*n;
	cout << p << endl;
	
	TinyMatrix<double, 2, 2> mm, nn, pp;
	
	mm = 1;
	nn = 2;
cout << "m = " << mm << "\nnn=" << nn << endl;
	
	pp = product(mm, nn);
	
	cout << pp << endl;
	
// 	product(M, N);
	
// 	cout << (M * N) << endl;

	Array<TinyVector<double, 2>, 2> malla(10, 10);
	
	cout << malla << endl;
	
	Array<double, 3> A(5,5,5), B(5,5,5);
	A = 0;
	
	A(3,2,1) = 7;
	cout << A << endl;
	
	TinyVector<int, 3> index;
	index = 1,0,0;
	
	A(index) = 1.0;
	cout << A << endl;

	cout << sum(A) << endl;
	
	cout << count (A > 5) << endl;
	
	B = where(A>5, A, -A);
	
	cout << B<< endl;

// 	cout << (A > 5) << endl;
}
