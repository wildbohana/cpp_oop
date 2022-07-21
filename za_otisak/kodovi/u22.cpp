// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include<iostream>
using namespace std;

// Apstraktna klasa
class A {
	public:
		virtual int oduzimanje() = 0;
		virtual int sabiranje() = 0;
};

// Isto apstraktna klasa jer sabiranje nije redefinisano
class B : public A {
	private:
		int a, b;
	public:
		B() {a = 2; b=++a;}
		int oduzimanje() {return a - b;}
		int mnozenje() {return a * b;}
};

// Apstraktne klase ne mogu da se instanciraju
int main() {
	B b;
	cout << b.oduzimanje() << b.mnozenje();
	return 0;
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.
