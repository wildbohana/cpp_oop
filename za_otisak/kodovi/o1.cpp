// Šta će biti ispisano posle izvršavanja sledećeg koda?

// T.hpp
#include <iostream>
using namespace std;

class T {
	private:
		static int x, y;
	public:
		T() {++x; y++;}
		~T() {x--; --y;}
		void dodaj(int i) {cout << x << y;}
		// Fali & posle ostream
		friend ostream operator<<(ostream &out, const T& t) {
			out << t.x << t.y;
			return out;
		}
}	//ovde namerno fali ;

// T.cpp
#include "T.hpp"

// Mogu da se inicijalizuju ovako, iako su u private, jer su static polja
int T::x = 0;
int T::y = 0;

// main.cpp
#include "T.hpp"
int main()
{
	T a;
	int i = 2;
	a.dodaj(i);
	cout << a << endl;
	return 0;
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci

/*
Greške:
; posle klase
preklapanja operatora za ispis
*/

// Da nema grešaka, ispisao bi 1111
