// Šta će biti ispisano posle izvršavanja sledećeg koda?

// Nije isto što i u25.cpp

#include <iostream>
using namespace std;

void c(int &r) {r = 1;}
void e(int r) {r = 2;}			// Namerno je stavljeno e ovde
void c(int *p) {*p = 3;}

int main() {
	int a = 4;

	c(a);			// Saljemo a po referenci
	cout << a;		// 1

	c(a);			// Opet šaljemo a po referenci
	cout << a;		// 1

	return 0;
}

// ISPIS: 11

/*
Pokazivač: 
- prima se kao (*r) {*r=...}
- šalje se kao (&a)
Referenca:
- prima se kao (&r) {r=...}
- šalje se kao (a)
*/
