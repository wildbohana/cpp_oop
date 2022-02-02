// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

void f(int &r) {
	r = 5;
}

void f(int *p) {
	*p = 9;
}

int main() {
	int a = 3;
	cout << a;		// 3

	f(a); 			// pozivanje reference
	cout << a;		// 5

	f(&a); 			// pozivanje pokazivača
	cout << a;		// 9
	return 0;
}

// ISPIS: 359

// Pokazivač u funkciji se prima kao (*r){*r=...} a šalje kao (&a)
// Referenca (&r){r=...} se šalje kao (a)