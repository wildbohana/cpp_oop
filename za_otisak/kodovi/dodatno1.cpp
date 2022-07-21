// Šta će biti ispisano na ekranu nakon izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

// KEEP IN MIND - OVDE NIJE BILO NASLEĐIVANJA
class A {
	public:
		virtual void p() {cout << "B";}
};

class B {
	public:
		void p() {cout << "A";}
};

void f(A& ra) {ra -> p();}		// ra je referenca, ne pokazivač (greška)

int main() {
	A a;
	B b;
	a.p();		// uvek B
	b.p();		// uvek A
	f(a);		// uvek B
	f(b);		// greška - funkcija f je definisana samo za klasu A (klasa B nije izvedena iz A)
	return 0;
}

// Dobićemo upozorenje o grešci

/*
varijacije:
void f(A& ra) {ra.p();}		// BABA
void f(A* ra) {ra->p();}	// BABA - ako u main poziva sa f(&a), f(&b)
p() nije virtual -> uvek ispisuje roditeljski deo (B) (i za ref i za pok)
*/
