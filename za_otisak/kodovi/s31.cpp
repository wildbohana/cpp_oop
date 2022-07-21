// Šta će se ispisati na ekranu?

#include <iostream>
using namespace std;

int main() {
	int *pa, *pb, a, b;
	pa = &a;
	pb = &b;

	a = 3;
	b = 3;

	*pa = -3;			// a = -3
	*pb = 6;			// b = 6

	a = b;				// a dobija vrednost od b što je 6
	cout << b << endl;	// Trik: a je nebitno, svakako ispisujemo b
	return 0;
}

// ISPIS: 6
