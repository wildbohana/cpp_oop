// Šta će biti ispisano na ekranu nakon izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	public:
		A(int a = 1) {cout << "AK" << a;}
		~A() {cout << "AD";}
};

class B {
	public:
		B(int b = 2) {cout << "BK" << b;}
		~B() {cout << "BD";}
};

class C {
	private:
		A a;
	public:
		C(int c = 3) : a(c) {cout << "CK" << c;}
		~C() {cout << "CD";}
};

int main() {
	C c(0);
	return 0;
}

// ISPIS: AK0CK0CDAD

/*
Prvo se kreira roditelj pa sve ostalo
Redosled kreiranja polja - onako kako su navedena

Trik u ovome je što se spominje klasa B ali ona je samostalna klasa
A u klasi C se pominje klasa A kao deo kompozicije, a ne njena nadklasa
Znači stvaramo klasu A, klasu C, pa onda obrnuto uništavamo - prvo klasu C pa onda klasu A
*/