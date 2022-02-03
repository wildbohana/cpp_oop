// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

int main() {
	int x = 2, y = 3;
	int *px;
  
	px = &x; 	// px dobija adresu od x
	*px = y;	// na adresu px se postavlja vrednost y
    
	cout << x << endl;
	return 0;
}

// ISPIS: 3

/*
Pokazivač: 
- prima se kao (*r) {*r=...}
- šalje se kao (&a)
Referenca:
- prima se kao (&r) {r=...}
- šalje se kao (a)
*/

/*
pokazivači:
dodatno3.cpp
o8.cpp
o21.cpp
s4.cpp
u1.cpp
*/
