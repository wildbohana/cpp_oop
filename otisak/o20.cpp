// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	public:
		A() {cout << "AK";}
		~A() {cout << "AD";}
};

class B : public A {
	public:
		B() : A() {cout << "BK";}
		~B() {cout << "BD";}
};

class C : public A {		// da je ovde B ne bi imali aabc nego abc za C c;
	private:
		B b;				// da je ovde A ne bi imali abc nego ac za C c;
	public:
		C() {cout << "CK";}
		~C() {cout << "CD";}
};

int main() {
	B b;
	C c;
	return 0;
}

// ISPIS: AK BK AK AK BK CK CD BD AD AD BD AD

/*
Destruktori se pozivaju obrnuto od konstruktora
Prvo se poziva klasa roditelja pa tek onda klasa deteta

Za B prvo pravimo A pa B - zato AKBK
Za C prvo pravimo A pa B pa C - zato AKAKBKCK
Imamo AKAK u C klasi zato što pozivamo klasu A i za klasu B i za klasu C
*/