// Šta če biti ispisano posle izvršavanja sledećeg koda:

#include <iostream>
using namespace std;

void refer(int &val) {val = -2;}
void point(int *val) {*val = 2;}

int main() {
	int temp = 4;

	refer(temp);		// Pravimo referencu
	cout << temp;		// Referenca ispisuje -2

	point(&temp);		// Pravimo pokazivač
	cout << temp;		// Pokazivač ispisuje 2

	return 0;
}

// ISPIS: -22
