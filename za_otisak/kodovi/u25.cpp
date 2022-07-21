// Šta će biti ispisano posle izvršavanja sledećeg koda?

// Nije isto što i o15.cpp

#include <iostream>
using namespace std;

void c(int &r) {r = 1;}
void e(int r) {r = 2;}
void c(int *p) {*p = 3;}

int main() {
	int a = 4;

	c(a);		// Referenca -> a = 1
	cout << a;	// 1

	c(&a);		// Pokazivač -> a = 3
	cout << a;	// 3

	return 0;
}

// Ispisaće se 13

/*
Pokazivač: 
- prima se kao (*r){*r=...}
- šalje se kao (&a)
Referenca:
- prima se kao (&r){r=...}
- šalje se kao (a)
*/
