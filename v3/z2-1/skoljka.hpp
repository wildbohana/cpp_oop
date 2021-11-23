#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

enum BojaSkoljke {PLAVA, CRVENA, ZELENA};

class Skoljka {

	private:
		BojaSkoljke boja;

	public:
		Skoljka() {
			boja = PLAVA;
		}

		Skoljka(BojaSkoljke bs) {
			boja = bs;
		}

		Skoljka(const Skoljka &s) {
			boja = s.boja;
		}

		void setBojaSkoljke(BojaSkoljke bs) {
			boja = bs;
		}

		BojaSkoljke getBojaSkoljke() const {
			return boja;
		}

		friend void ispisiSkoljku(const Skoljka &);
};

#endif // SKOLJKA_HPP_INCLUDED
