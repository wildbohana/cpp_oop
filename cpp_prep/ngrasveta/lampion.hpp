#ifndef LAMPION_HPP_INCLUDED
#define LAMPION_HPP_INCLUDED

#include "fenjer.hpp"

class Lampion : public Fenjer {
	protected:
		double cena;
		static int instance;
	public:
		Lampion() : Fenjer(), cena(0) {
			++instance;
		}
		Lampion(Materijal m, bool isp, double c) : Fenjer(m, isp), cena(c) {
			++instance;
		}
		~Lampion() {
			--instance;
		}

		int getInstance() const {
			return instance;
		}

		double getCena() const {
			return cena;
		}
		void setCena(const double c) {
			this -> cena = c;
		}

		bool popravi() {
			if(!ispravan) {
				ispravan = true;
				return popravi();
			}
			return false;
		}

		void ispis() {
			cout << "-- Lampion --" << endl;

			Fenjer::ispis();
			cout << "Cena: " << cena << endl;
		}


};

#endif // LAMPION_HPP_INCLUDED
