// Šta če biti ispisano posle izvršavanja sledećeg koda:

#include <iostream>
using namespace std;

void refer(int &val) {val = -2;}
void point(int *val) {*val = 2;}

int main() {
	int temp = 4;

	refer(temp);		// pravimo referencu
	cout << temp;		// a referenca ispisuje -2

	point(&temp);		// pravimo pokazivač
	cout << temp;		// a pokazivač ispisuje 2

	return 0;
}

// ISPIS: -22