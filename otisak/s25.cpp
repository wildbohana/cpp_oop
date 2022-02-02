/*
Označiti tačno napisni destruktor za klasu P:

class KlasaP {
	private:
		int arr[2];			// statički element
		char *pokc;			// dinamički element
	public:
		KlasaP() {pokc = new char [2];}
};


1. ~KlasaP() {remove arr; delete pokc; delete pokc;}
2. ~KlasaP() {delete arr;}
3. ~KlasaP() {remove[] pokc;}
4. ~KlasaP() {remove arr; delete pokc[];}
5. ~KlasaP() {remove[] arr;}
6. ~KlasaP() {delete[] pokc;}			// brišeš samo dinamički element
*/

// Tačno je napisan destruktor pod 6