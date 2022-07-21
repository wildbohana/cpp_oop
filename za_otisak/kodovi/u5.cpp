// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class C {
	public:
		virtual void f() {cout << "C";}		// Virtuelna metoda
};

class D : public C {
	public:
		void f() {cout << "D";}				// Redefinisana virtuelna metoda
};

int main() {
	C c;
	D d;
	c.f();			// C
	d.f();			// D

	C *p;			// Pokazivač tipa C
	p = &d;			// Koji pokazuje na klasu D

	p->f(); 		// D (redefinisani ispis)
			
	return 0;
}

// ISPIS: CDD
