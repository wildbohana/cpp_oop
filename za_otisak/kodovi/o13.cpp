// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	public:
		virtual void p() {cout << "B";}
};

class B : public A {
	public:
		void p() {cout << "A";}
};

void f(A& ra) {ra.p();}

int main() {
	B b;			// Pravimo objekat B
	b.p();			// Ispisujemo A kao što funkcija p za klasu B kaže
	f(b);			// Ispisujemo A jer je metoda virtuelna i redefinisana u potklasi
					// (bez obzira što je referenca za klasu A u funkciji f)
	return 0;
}

// ISPIS: AA
