// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	private:
		int a, b;
	public:
		A() {a = 1; b = 2;}
		A(int aa = 1, int bb = 2) {a = aa; b = bb;}
		A(const A& aa) {a = aa.a; b = aa.b;}
		void ispis() {cout << ++a << b++;}	
};

int main() {
	A a, a2(3, 4), a3(a2);
	a.ispis();
	a1.ispis();				// a1 nije definisano nigde
	a3.ispis();
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.

// isto greška:
// u main mi treba A a() - bez zagrada ne pozivam konstruktor
// ali ako ne stavim to onda kaže da pozivam overloaded A()
