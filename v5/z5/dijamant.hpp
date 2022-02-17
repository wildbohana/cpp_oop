#ifndef DIJAMANT_HPP_INCLUDED
#define DIJAMANT_HPP_INCLUDED

#include <iostream>

using namespace std;

class Dijamant {
	private:
		double vrednost;
		double karata;
	public:
		Dijamant(double vrednost = 10000, double karata = 14) {
			this->vrednost = vrednost;
			this->karata = karata;
		}
		Dijamant(const Dijamant& d) : vrednost(d.vrednost), karata(d.karata) {}

		friend ostream& operator<<(ostream& os, const Dijamant &d) {
			os << "Podaci o dijamantu: vrednost = " << d.vrednost << "; karata = " << d.karata << endl;
			return os;
		}
};

#endif // DIJAMANT_HPP_INCLUDED
