// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	int *px, *py, *pz;

	x = 1;
	y = 2;
	z = 3;

	// x=1, y=2, z=3

	px = &x;
	py = &y;
	pz = &z;

	int &rx = *px, ry = *py, &rz = *pz;

	*py = ry;		// py dobija adresu od y (jer je referenca adresa y)
	*pz = y;		// z dobija vrednost od y
	x = *py;		// x preuzima vrednost iz py (koji pokazuje na y)

	// x=2, y=2, z=2

	cout << z << x << y << "\n";		// kako je y = 2, ispisaće se 222
	return 0;
}

// ISPIS: 222
