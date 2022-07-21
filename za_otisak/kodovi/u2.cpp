// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class K {
	private:
		int x,y;
	public:
		K() {x = 2; y = 9;}
		void f() {
			for(int i=0; i<10; i++)		// Trik: kod for() nema {}, pa se zato:
				x++;					// Ovo izvrši 10 puta (x = 12)
				y++;					// Ovo samo jednom (y = 10)
				cout << x << y << endl;	// I ovo samo jednom
		}
};

int main() {
	K k;
	k.f();
	return 0;
}

// ISPIS: 1210

// Kada ne napišemo {} iza neke petlje ili uslova, izvršiće se samo ona linija odmah ispod tog izraza
// Druga linija ispod tog izraza, i one ostale, se smatraju kao zaseban deo koda, ne kao deo bloka
