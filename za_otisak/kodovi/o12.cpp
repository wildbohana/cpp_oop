// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

// Klasa ima apstraktne metode - klasa je apstraktna
// Apstraktna klasa ne može da se instancira
class A {
	public:
		virtual int oduzimanje() = 0;
		virtual int sabiranje() = 0;
};

// Klasa B nasleđuje apstraktnu klasu A
// Jedna od nasleđenih metoda i dalje nije redefinisana
// Znači, i klasa B je apstraktna
class B : public A {
	private:
		int a, b;
	public:
		B() {a = 2; b = ++a;}
		int oduzimanje() {return a - b;}
		int mnozenje() {return a * b;}		
		//  sabiranje() - nije redefinisano
};

int main() {
	B b;
	cout << b.oduzimanje() << b.mnozenje();
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.
