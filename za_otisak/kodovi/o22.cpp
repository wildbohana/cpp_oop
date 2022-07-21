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

class B {
	private:
		int b;
	public:
		B() {b = 1;}
		B(int bb) : b(bb) {}
		int getB() {return b;}
};

// Klasa C nasleđuje klasu B, dok sa klasom A nije ni u kakvom odnosu
class C : public B {
	private:
		B b;
		int c;
	public:
		C() : b(2) {c = 2;}
		// Nemamo nigde spomenuto a (greška)
		C(int cc) : b(cc) {a = 1; c = cc;}
		void print() {cout << a << c << b.getB();}
};

int main() {
	C c1(2), c2;

	c1.print();
	c2.print();
}

// Dobićemo upozorenju o grešci

// Da nema greške, ispisao bi 122022
