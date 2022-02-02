// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	int &ra = a, &rb = b, &rc = c;	// reference

	a = 1;					// a = 1
	b = 8;					// b = 8
	c = 9;					// c = 9

	int *p = &rb;			// pravimo pravi pokazivač na referencu za b
	*p = 15;				// menjamo vrednost b iz 8 u 15

	cout << a << b << c << "\n";
	// ispisujemo staro a (1), novo b (15), i staro c (9)
	return 0;
}

// ISPIS: 1159
