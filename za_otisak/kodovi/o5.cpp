// Izaberi dole

#include <iostream>
using namespace std;

class X {
	private:
		int *a;
	public:
		double *b, *c;
	protected:
		char *d;
	public:
		X() {a = new int[5]; b = new double[1]; c = new double; d = new char[3];}
		~X() {delete[] a; delete[] b; delete c; delete[] d;}
};

// Watch out: klasa Y nije ni u kakvoj relaciji sa klasom X
class Y {
	private:
		int f;
	public:
		Y() {f = 1;}
};

/*
Ispravni destruktori za klasu Y su:
1. ~Y() {delete[] a, delete[] b, delete c, delete[] d, delete[] f}
2. ~Y() {delete[] f}
3. ~Y() {delete[] a, delete[] b, delete c, delete[] d, delete f}
4. ~Y() {delete f}
5. ~Y() {}

TAČAN: 5. Samo ~Y() {}
*/
