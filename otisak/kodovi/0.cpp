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
// Pokazivač u funkciji se prima kao (*r){*r=...} a šalje kao (&a)
// Referenca (&r){r=...} se šalje kao (a)


/*
pokazivači:
dodatno3.cpp
o8.cpp
o21.cpp
s4.cpp
u1.cpp
*/
