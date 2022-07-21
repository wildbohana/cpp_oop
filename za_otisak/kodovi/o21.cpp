// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int b = 1;
	int *pa;
	int *pb;

	pa = &a;
	pb = &b;

	b = a++;			// b se prvo dodeli vrednost 1, pa se tek onda inkrementuje a, koje će sad imati vrednost 2
	cout << *pb;		// b = 1

	cout << ++(*pa);	// Prvo povećamo vrednost a na 3, pa tek onda ispišemo vrednost a
						// a = 3
	return 0;
}

// ISPIS: 13
