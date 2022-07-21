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

	A* pa;
	B* pb;

	pa = &b;		// Može
	pb = &a;		// Ne može

	a.f();			// Ispisao bi A
	b.f();			// Ispisao bi B

	pa->f();		// Ispisao bi B
	pb->f();		// Pukao bi program

	return 0;
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.
