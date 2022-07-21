// Šta će biti ispisano na ekranu nakon izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	// Polje a je static - zajedničko polje svim objektima klase A
	// static polja mogu da se inicijalizuju i iz private i iz public dela
	public:
		static int a;
	public:
		A() {a++;}
		void add(int x) {a += x;}
		int getA() {return a;}
};

int A::a = 1;			// Inicijalizujemo statičko polje

int main() {
	A a1, a2;			// a1: 1+1=2  &&  a2: 2+1=3
	cout << A::a;		// 3
	
	a1.add(2);			// 3+2=5
	cout << a1.getA();	// 5

	a2.add(1);			// 5+1=6
	cout << a2.getA(); 	// 6

	return 0;
}

// ISPIS: 356
