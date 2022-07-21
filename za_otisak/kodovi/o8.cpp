// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	
	// Reference
	int &ra = a, &rb = b, &rc = c;

	a = 1;					// a = 1
	b = 8;					// b = 8
	c = 9;					// c = 9

	int *p = &rb;			// Pravimo pokazivač na b (b i rb imaju istu adresu)
	*p = 15;				// Menjamo vrednost b iz 8 u 15

	// Ispisujemo staro a (1), novo b (15), i staro c (9)
	cout << a << b << c << "\n";
	
	return 0;
}

// ISPIS: 1159
