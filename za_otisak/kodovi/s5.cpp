// Izaberi koji je tačan destruktor za klasu C:

#include <iostream>
using namespace std;

class A {
	private:
		int *a, *b;
	public:
		A() {a = new int[5]; b = new int;}
		~A() {delete[] a; delete b;}
};

class C : public A {
	private:
		double *c;
	public:
		C() {c = new double[5];}
};

/*
Pick your poison:

1. ~C() {delete[] c;}
2. ~C() {delete a; delete b; delete c;}
3. ~C() {delete c;}
4. ~C() {delete[] a; delete b[]; delete[] c;}
*/

// Tačan destruktor je 1. ~C() {delete[] c;} 
