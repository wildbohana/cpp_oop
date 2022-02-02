// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	public:
		vitural void f() {cout << "A";}
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

	pa = &b;		// greška: pokazivač tipa A pokazuje na klasu B
	pb = &a;		// greška: pokazivač tipa B pokazuje na klasu A

	a.f();			// ispisao bi B ili bi pukao
	b.f();

	pa->f();		// e ovo već nisam sigurna, mislim da bi pukao
	pb->f();

	return 0;
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.