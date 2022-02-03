// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	int *px, *py, *pz;

	x = 1;
	y = 2;
	z = 3;

	// pokazivače pravimo
	px = &x;
	py = &y;
	pz = &z;

	// pravimo reference preko pokazivača
	int &rx = *px, ry = *py, &rz = *pz;

	*py = ry;		// ry = &y  ->  *py = ry = &y  =>  *py = &y (py dobija adresu od y i postaje pokazivač na y)
	*pz = y;		// na adresu pz se upisuje vrednot iz y
	x = *py;		// x preuzima vrednost iz lokacije na koju py pokazuje (preuzima vrednost y)

	cout << z << x << y << "\n";		// kako je y = 2, ispisaće se 222
	return 0;
}

// ISPIS: 222
