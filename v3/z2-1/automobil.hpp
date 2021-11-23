#ifndef AUTOMOBIL_HPP_INCLUDED
#define AUTOMOBIL_HPP_INCLUDED

#include "menjac.hpp"
#include "skoljka.hpp"

#define BRZINA_MAX 6
#define BRZINA_MIN 0

enum StanjeAutomobila {UGASEN, POKVAREN, U_VOZNJI};

class Automobil {

	private:
		Menjac m;
		Skoljka s;
		StanjeAutomobila state;


	public:
		// konstruktori
		Automobil(StanjeAutomobila st = UGASEN) : m(), s() {state = st;}
		Automobil(int br, TipMenjaca tm, BojaSkoljke bs, StanjeAutomobila st = UGASEN) : m(br, tm), s(bs) {state = st;}
		Automobil(const Automobil &a) : m(a.m), s(a.s) {state = a.state;}

		// seteri
		void setStanjeAutomobila(StanjeAutomobila st) {
			state = st;
		}

		void setBrojBrzina(int br) {
			m.setBrojBrzina(br);
		}

		void setBojaSkoljke(BojaSkoljke bs) {
			s.setBojaSkoljke(bs);
		}

		void setTipMenjaca(TipMenjaca tm) {
			m.setTipMenjaca(tm);
		}

		// geteri
		StanjeAutomobila getStanjeAutomobila() const {
			return state;
		}

		int getBrojBrzina() const {
			return m.getBrojBrzina();
		}

		TipMenjaca getTipMenjaca() const {
			return m.getTipMenjaca();
		}

		BojaSkoljke getBojaSkoljke() const {
			return s.getBojaSkoljke();
		}

		// black ops
		bool pokvari() {
			if (state == UGASEN || state == U_VOZNJI) {
				state = POKVAREN;
				setBrojBrzina(0);
				cout << "Automobil je uspesno pokvaren." << endl;
				return true;
			}
			cout << "Operacija neuspesna." << endl;
			return false;
		}

		bool popravi() {
			if (state == POKVAREN) {
				state = UGASEN;
				cout << "Automobil je uspesno popravljen." << endl;
				return true;
			}
			cout << "Operacija neuspesna." << endl;
			return false;
		}

		bool ugasi() {
			if (state == U_VOZNJI) {
				state = UGASEN;
				setBrojBrzina(0);
				cout << "Automobil je uspesno ugasen." << endl;
				return true;
			}
			cout << "Operacija neuspesna." << endl;
			return false;
		}

		bool upali() {
			if (state == UGASEN) {
				state = U_VOZNJI;
				setBrojBrzina(1);			// prvo se ubaci u prvu brzinu, logicno
				cout << "Automobil je uspesno upaljen." << endl;
				return true;
			}
			cout << "Operacija neuspesna." << endl;
			return false;
		}

		bool povecajBrzinu(int x) {
			if (state == U_VOZNJI && (getBrojBrzina()+x <= BRZINA_MAX)) {
				setBrojBrzina(getBrojBrzina()+x);
				cout << "Brzina je uspesno promenjena." << endl;
				return true;
			}
			cout << "Operacija neuspesna." << endl;
			return false;
		}

		bool smanjiBrzinu(int x) {
			if (state == U_VOZNJI && (getBrojBrzina()-x >= BRZINA_MIN)) {
				setBrojBrzina(getBrojBrzina()-x);
				cout << "Brzina je uspesno promenjena." << endl;
				return true;
			}
			cout << "Operacija neuspesna." << endl;
			return false;
		}

		friend void ispisiAutomobil(const Automobil &);
};

#endif // AUTOMOBIL_HPP_INCLUDED
