// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	int *px, *py, *pz;

	x = 1;
	y = 2;
	z = 3;

	px = &x;
	py = &y;
	pz = &z;

	int &rx = *px, ry = *py, &rz = *pz;

	*py = ry;		// py je pokazivač na referencu na y što je maltene isto što i pokazivač na y
	*pz = y;		// pz je pokazivač na y
	x = *py;		// x preuzima vrednost iz pokazivača py koje pokazuje na y (preuzima vrednost y)

	cout << z << x << y << "\n";		// kako je y = 2, ispisaće se 222
	return 0;
}

// ISPIS: 222