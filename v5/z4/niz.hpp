#ifndef NIZ_HPP_INCLUDED
#define NIZ_HPP_INCLUDED

#include <iostream>
using namespace std;

// pravimo genericnu klasu - sablon klasa takoreci
// parametar class -> klasa ili primitivan tip, parametar int -> obican int
template<class T, int D>
class Niz {
	private:
		T elementi[D];		// niz elemnti, max D elemenata koji su tipa T
		int brEl;
	public:
		Niz() {
			brEl = 0;
		}

		int getBrEl() const {
			return brEl;
		}

		// preklapanje operatora indeksiranja [] - kada citamo i kada upisujemo vrednost
		// dva operatora su delovi klase, ne prijateljske funckije
		T operator[](int i) const {			// koristi se za citanje - ne moze biti za pisanje zbog const
			return elementi[i];
		}

		T& operator[](int i) {
			return elementi[i];
		}

		// preklapanje operatora dodele (ulancavanje) - kao metoda (poziva se nad nekim objektom - nad tim objektom dodeljujemo ovaj niz ovde dole)
		Niz<T, D>& operator=(const Niz<T, D>& niz) {
			for (int i = 0; i < niz.brEl; i++) {
				elementi[i] = niz[i];	// zbog prekopljenog operatora ne pisemo niz.elementi[i]
			}
			brEl = niz.brEl;
			// pokazivac na objekat na koji je pozvana metoda, mora se dereferencirati
			return *this;
		}

		void printNiz() const {
			cout << "(";
			for (int i = 0; i < brEl - 1; ++i) {
				cout << elementi[i] << ", ";
			}
			cout << elementi[brEl-1] << ")" << endl;
		}

		bool insertNiz(const T&);		// cisto demonstrativno implementiramo van klase

};

template<class T, int D>
bool Niz<T,D>::insertNiz(const T& t) {
	if (brEl < D) {
		elementi[brEl] = t;
		brEl++;
		return true;
	}
	return false;
}

template<class T, int D>
bool operator==(const Niz<T,D>& niz1, const Niz<T,D>& niz2) {
	if (niz1.getBrEl() != niz2.getBrEl()) {
		return false;
	}
	for (int i = 0; i < niz1.getBrEl(); ++i) {
		if (niz1[i] != niz2[i]) {
			return false;
		}
	}
	return true;
}


#endif // NIZ_HPP_INCLUDED
