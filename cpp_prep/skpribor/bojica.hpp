#ifndef BOJICA_HPP_INCLUDED
#define BOJICA_HPP_INCLUDED

#include "olovka.hpp"
#include "dinstring.hpp"

enum Tip {DRVENA, VOSTANA};

class Bojica : public Olovka {
	protected:
		Tip tip;
		DinString boja;
	public:
		Bojica() : Olovka(), tip(DRVENA), boja("crvena") {}
		Bojica(double c, Tip t, const DinString &b) : Olovka(c), tip(t), boja(b) {}

		Tip getTip() const {
			return tip;
		}

		DinString getBoja() const {
			return boja;
		}

		bool postaviCenu() {
			double novaCena;

			cout << "Unesite zeljenu vrednost cene: " << endl;
			cin >> novaCena;

			if(novaCena > 0) {
				cena = novaCena;
				return true;
			}
			return false;
		}

		friend ostream &operator<<(ostream &out, const Bojica &b) {
			out << ".... BOJICA ...." << endl;

			out << "Cena: " << b.cena << endl;

			out << "Tip: ";
			if(b.tip == DRVENA) {
				out << "drvena." << endl;
			} else if(b.tip == VOSTANA) {
				out << "vostana." << endl;
			} else {
				out << "nepoznato." << endl;
			}

			out << "Boja: " << b.boja << endl;

			return out;
		}

};

#endif // BOJICA_HPP_INCLUDED
