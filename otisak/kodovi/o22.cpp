// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	protected:
		int a;
	public:
		A() {a = 0;}
		A(int aa) : a(aa) {}
		int getA() {return a;}
};

class B {			// treba class B : public A da bi se kompajlirao
	private:
		int b;
	public:
		B() {b = 1;}
		B(int bb) : b(bb) {}
		int getB() {return b;}
};

class C : public B {
	private:
		B b;
		int c;
	public:
		C() : b(2) {c = 2;}
		C(int cc) : b(cc) {a = 1; c = cc;}
		void print() {cout << a << c << b.getB();}
};

int main() {
	C c1(2), c2;	// c1:  c = 2 (2. konstr.), b = 2 (b(cc)), a = 1 (2. konstr.)
					// c2:  c = 2 (1. konstr.), b = 2 (1. konstr. za C poziva 2. konstr. za B), a = 0 (konstr. bez param.)
	c1.print();		// 122
	c2.print();		// 022
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.

// Da nema greške, ispisao bi: 122022
