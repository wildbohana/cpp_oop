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

int main()
{
	C c1(2), c2;
	c1.print();
	c2.print();	
}

// Dobićemo upozorenje o grešci.

/*
Odgovor kada ne bi bilo greške: 122022
Odgovor kada ima grešku: neće se kompajlirati jer a nije deklarisano u klasi C
 	-> da ima class B : public A, dobili bi 122022
/*