// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class K {
	private:
		int x,y;
	public:
		K() {x = 2; y = 9;}
	void f() {
		for(int i=0; i<10; i++)
			x++;					// ovo se izvrši 10 puta (x = 12)
			y++;					// ovo samo jednom (y = 10)
			cout << x << y << endl;	// i ovo samo jednom (jer nema {} kod for)
	}
};

int main() {
	K k;
	k.f();
	return 0;
}

// ISPIS: 1210