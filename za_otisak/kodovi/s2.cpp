// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

enum Vrednosti {A, B=2, C=A, D=B+C, E=D};		// 0 2 0 2 2

int main() {
	Vrednosti v1 = A, v2 = B, v3 = C, v4 = D, v5 = E;
	for (int i = 0; i < 5; i++) {
		switch(i) {
			case 0: cout << v1; break;
			case 1: cout << v2; break;
			case 2: cout << v3; break;
			case 3: cout << v4; break;
			case 4: cout << v5; break;
			default: cout << 0; break;
		}
	}
	return 0;
}

// ISPIS: 02022
