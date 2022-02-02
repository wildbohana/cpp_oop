// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include<iostream>
using namespace std;

class A {
	public:
		virtual void p() {cout << "B";}
};

class B : public A {
	public:
		void p() {cout << "A";}
};

void f(A& a) {a.p();}

int main() {
	B b;
	b.p();		// p() je redefinisano u B da ispisuje A
	f(b);		// šaljemo objekat tipa A ali njena p metoda je virtual i kao takva se ne može izvršiti
				// umesto toga će se izvršiti redefinisana p metoda iz klase B
	return 0;
}

// ISPIS: AA