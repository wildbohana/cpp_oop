// Šta će biti ispisano na ekranu nakon izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

// Radi sa originalom zbog reference
void set1(int &x) {
	x = 1;
}

// Radi sa kopijom
void set2(int x) {
	x = 2;
}

// Promeni ga permanentno preko pokazivača
void set3(int *x) {
	*x = 3;
}

int main() {
	int t = 4;

	set1(t);			// setuje na 1 jer se radi sa originalom (referenca)
	cout << t;			// 1

	set2(t);			// funkcija setuje na 2, ali se to ne čuva jer se radi sa kopijom
	cout << t;			// 1

	int *pt;
	pt = &t;			// pt čuva adresu t -> vidljive su promene zbog rada sa originalom (referenca)

	// LMAO MENJA SE POKAZIVAČ, NE PODATAK
	set3(pt);			// setuje vrednost pokazivača pt na 3 (ne t, pt!)
	cout << *pt;		// 3 (obavezno dereferenciranje da bi dobili vrednost sa adrese na koju pokazuje pt)

	return 0;
}

// ISPIS: 113
