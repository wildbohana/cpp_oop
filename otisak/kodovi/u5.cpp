// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class C {
	public:
		virtual void f() {cout << "C";}		// apstraktna metoda
};

class D : public C {
	public:
		void f() {cout << "D";}				// redefinisana apstraktna metoda
};

int main() {
	C c;
	D d;
	c.f();			// C
	d.f();			// D

	C *p;			// pokazivač tipa C
	p = &d;			// koji pokazuje na klasu D

	p->f(); 		// D (redefinisani ispis)
			
	return 0;
}

// ISPIS: CDD

/*
Kad nasleđuješ virtual metodu -> ispisaće se redefinisana metoda
Kad nasleđuješ običnu metodu -> ispisala bi originalnu metodu iz natklase
*/
