// Šta će biti ispisano na ekranu nakon izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	public:
		virtual void p() {cout << "B";}
};

class B {
	public:
		void p() {cout << "A";}
};

void f(A& ra) {ra -> p();}		// ra je referenca a ne pokazivač (greška)

// Dobićemo upozorenje o grešci

/*
	varijacije:
	void f(A& ra) {ra.p();}		// BABA
	void f(A* ra) {ra->p();}	// BABA - ako u main poziva sa f(&a), f(&b)
	p() nije virtual -> uvek ispisuje roditeljski deo (B) (i za ref i za pok)
*/

int main() {
	A a;
	B b;
	a.p();		// uvek B
	b.p();		// uvek A
	f(a);		// uvek B
	f(b);		// B ako je ref/pok
	return 0;
}