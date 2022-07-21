// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include<iostream>
using namespace std;

class A {
	public:
		virtual void p() {cout << "B";}
};

class B : public A {
	public:
		void p() {cout << "A";}
};

void f(A& a) {a.p();}

int main() {
	B b;
	b.p();		// p() je redefinisano u B, "A"
	f(b);		// f prima referencu tipa A, ali zbog polimorfizma poziva redefinisanu funkciju iz B, "A"

	return 0;
}

// ISPIS: AA
