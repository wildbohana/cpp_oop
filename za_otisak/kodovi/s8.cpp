// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

template <class TIP, int LEN>

class GEN {
	protected:
		TIP arr[LEN];
	public:
		GEN() {for(int i = 0; i < LEN; i++) arr[i] = LEN;}
		GEN(int *p) {for(int i = 0; i < LEN; i++) arr[i] = *(p+1);}
		friend ostream& operator<<(ostream& out, const GEN<TIP, LEN> g) {
			for(int i = 0; i < LEN; i++) out << g.arr[i];
			return out;
		}
};
int main() {
	int *p = new int[2];	// Pravimo niz p koji ima 2 elementa tipa int
	*(p+0) = 3;				// Element 0 ima vrednost 3
	*(p+1) = 3;				// Element 1 ima vrednost 3

	GEN<int, 2> g1(p);		// g1 je kopiran niz p koji ima 3,3
	cout << g1;				// Ispisujemo g1 - 33

	GEN<int, 2> g2;			// Pravimo novi niz g2
	cout << g1;				// Trik: ispisujemo g1 - 33

	return 0;
}

// ISPIS: 3333
