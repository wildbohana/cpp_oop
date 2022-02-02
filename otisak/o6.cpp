// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

enum Stanje{ON, OFF};				// 0 - ON, 1 - OFF

class Masina {
	private:
		Stanje stanje;
	public:
		Masina() {stanje = OFF;}
		Masina(Stanje s) {stanje = s;}
		Masina(const Masina &m) {stanje = m.stanje;}
		~Masina() {stanje = OFF;}
		friend ostream& operator << (ostream &out, const Masina &m) {
			out << m.stanje;
			return out;
		}
};

int main() {
	Masina m1, m3(ON), m2(m3);		// m1 - OFF (1), m3 - ON(0), m2 - ON(0)
	cout << m1 << m2 << m3 << endl;
	return 0;
}

// ISPIS: 100