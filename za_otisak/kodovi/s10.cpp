// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

template <class Typ, int Val>

class Temp {
	private:
		Typ i;
		Typ j;
	public:
		Temp() {i = Val; j = Val;}
		Temp(Typ ii, Typ jj) {i = ++ ii; j = jj;}
		~Temp() {cout << i-- << j;}			// Prvo se ispiše i, pa mu se tek onda smanji vrednost
};

int main() {
	Temp<int, 1> t1;			// Val = 1      -> konstruktor postavlja da su i,j jednaki Val     -> t1(1,1)
	Temp<int, 2> t2 (3, 4);		// i = 3, j = 4 -> konstruktor radi ++i, a j ostavlja kako jeste   -> t2(4,4)

	return 0;					// Objekti se uništavaju, pozivaju se destruktori, prvo za t2 pa onda za t1
}

// Destruktor za t2: 44
// Destruktor za t1: 11

// ISPIS: 4411
