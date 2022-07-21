// Šta će biti ispisano posle izvršavanja sledećeg koda?

// Static.hpp
class Static {
	private:
		static int a, b;
	public:
		Static() {--a; b--;}
		void dodaj(int i) {a -= a; b += b;}
		int suma() {return a + b;}
};

// Static.cpp
#include "Static.hpp"
int Static::a = 3;
int Static::b = 3;

// main.cpp
#include <iostream>
using namespace std;
#include "Static.hpp"

// KEEP IN MIND: polja a i b su zajednička za oba objekta

int main() {
	Static s1, s2;			// dva konstruktora -> a=3-2=1, b=3-2=1	(-2 jer dva puta odradimo dekrementiranje)
	s1.dodaj(2);			// a: 1-1=0  |  b: 1+1=2
	s2.dodaj(2);			// a: 0-0=0  |  b: 2+2=4

	// a = 0, b = 4  =>  suma(0+4) = 4
	cout << s1.suma() << s2.suma() << endl;
	
	return 0;
}

// ISPIS: 44
