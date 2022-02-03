// Šta će biti ispisano na ekranu nakon izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

void set1(int &x) {		// referenca
	x = 1;
}

void set2(int x) {		// kopija
	x = 2;
}

void set3(int *x) {		// preko pokazivača menjamo vrednost
	*x = 3;
}

int main() {
	int t = 4;

	set1(t);			// setuje na 1 jer se radi sa originalom zbog reference
	cout << t;			// 1

	set2(t);			// funkcija setuje na 2, ali se to ne čuva jer radi sa kopijom
	cout << t;			// 1

	int *pt;
	pt = &t;			// pt čuva adresu t -> vidljive su promene zbog rada sa originalom
	set3(pt);			// setuje vrednost na adresi pt (na kojoj se nalazi podatak t) na 3
	cout << *pt;		// 3
	
	return 0;			// ako nema * ispisuje vrednost na adresi 3
}

// ISPIS: 113
