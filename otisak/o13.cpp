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
	B b;					// pravimo objekat B -> ispis A (redefinisano p)
	b.p();					// ispisujemo A kao što funkcija p kaže
	f(b);					// samo pravi pokazivač, nema ispisa
	return 0;
}

// ISPIS: AA