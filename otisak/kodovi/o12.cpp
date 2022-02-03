// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {									// apstraktna klasa
	public:
		virtual int oduzimanje() = 0;
		virtual int sabiranje() = 0;		// apstraktna metoda
};

class B : public A {						// apstraktna klasa (ostala aps. metoda)
	private:
		int a, b;
	public:
		B() {a = 2; b = ++a;}
		int oduzimanje() {return a - b;}
		int mnozenje() {return a * b;}		// sabiranje nije redefinisano
};

int main() {
	B b;									// apstraktne klase ne mogu da se instanciraju
	cout << b.oduzimanje() << b.mnozenje();
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.
