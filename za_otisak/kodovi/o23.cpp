// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	public:
		virtual void f() {cout << "A";}
};

class B : public A {
	public:
		void f() {cout << "B";}
};

int main() {
	A a;
	B b;
	A* pa;			// pa - pokazivač na KLASU A
	B* pb;			// pb - pokazivač na KLASU B

	pa = &b;		// Ne uspe konverzija iz *A u *B -> greška
	pb = &a;		// Ne uspe konverzija iz *B u *A -> greška

	a.f();			// Klasa a ima član f (virtualna metoda) "A"
	b.f();			// Klasa b ima član f (redefinisana metoda) "B"

	pa->f();		// Ispisao bi "B" da uspe konverzija
	pb->f();		// Ispisao bi "A" da uspe konverzija

	return 0;
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.
