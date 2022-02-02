// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	public:
		int a;
		static int b;
		A() {a = 1;}
		A(int aa) {a = aa;}
		int getA() const {return a;}
		int getB() const {return b;}
};

int A::b = 2;

int main() {
	A a(3), b;			// a(3, 2), b(1, 2)

	a.a += b.b;			// a.a = 3+2 = 5
	a.b += b.a;			// a.b = 2+1 = 3 - b je zajedničko polje
	b.a += a.b;			// b.a = 1+3 = 4
	b.b += a.a;			// b.b = 3+5 = 8 - b je zajedničko polje (zato ide 3+5 a ne 2+5)  =>  sada su i a.b i b.b = 8

	cout << a.a << a.b << b.a << b.b;
}

// ISPIS: 5848