// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class X {
	private:
		char x;
	public:
		X(char xx = 'A') {x = xx; cout << x;}
		~X() {cout << 'B';}
};

class Y {
	private:
		X x;
};

class Z : public X {
	private:
		Y y;
};

int main() {
	Z z;			// klasa Z je potklasa od X -> poziva se kontrutkor za X, pa onda konstruktor za klasu Y opet poziva konstruktor za X -> ispis AA
	Y y;			// klasa Y poziva konstruktor za X -> ispis A
	return 0;		// i na kraju se pozivu 3 destruktora za 3 konstruktora -> ispis BBB
}

// ISPIS: AAABBB