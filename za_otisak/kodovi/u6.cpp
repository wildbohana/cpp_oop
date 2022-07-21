// Šta će biti ispisano posle izvršavanja sledećeg koda?

// T.hpp
#include<iostream>
using namespace std;

class T {
	private:
		static int x, y;
	public:
		T() {++x; y++;}
		~T() {x--; --y;}
		void dodaj(int i) {cout << x << y;}
		friend ostream operator<<(ostream & out, const T& t) {
	 		out << t.x << t.y;
			return out;
	  	}
}

// T.cpp
#include "T.hpp"
int T::x = 0;
int T::y = 0;

// main.cpp
#include "T.hpp"
int main() {
	a.dodaj(i);
	cout << a << endl;
	return 0;
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.

/*
Nema ; posle zagrada klase
'a' nije definisano u main-u
'T' je nedeklarisano u main-u
*/
