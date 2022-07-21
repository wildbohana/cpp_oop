// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include<iostream>
using namespace std;

class A {
	A(int xx) {x = xx;}
	A& operator++()	{		// Prefiksni - nema ispis
		x++;
		A temp(++x);
		temp.x = ++x;
		return *this;
	}
	A operator++(int i) {	// Sufiksni - ima ispis
		A temp(x);
		x++;
		cout<< "B";
		return temp;
	}
};

int main() {
	A a(6);
	++a;					// Pozvali smo prefiksni (bez ispisa)
	return 0;
}

// Program će se izvršiti, ali neće ništa ispisati.
