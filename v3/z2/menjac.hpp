#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED

enum TipMenjaca {AUTOMATIK, MANUELNI};

class Menjac {

	private:
		TipMenjaca tip;
		int broj_brzina;

	public:
		Menjac() {
			tip = AUTOMATIK;
			broj_brzina = 5;
		}

		Menjac (TipMenjaca t, int bb) {
			tip = t;
			if(!setBrojBrzina(bb)){
				broj_brzina = 5;
			}
		}

		Menjac(const Menjac &m) {
			broj_brzina = m.broj_brzina;
			tip = m.tip;
		}

		bool setBrojBrzina(int bb) {
			if (bb == 5 || bb == 6){
				broj_brzina = bb;
				return true;
			}
			return false;
		}

		void setTip(TipMenjaca t) {
			tip = t;
		}

		int getBrojBrzina() const {
			return broj_brzina;
		}

		TipMenjaca getTip() const {
			return tip;
		}

		friend void ispisiMenjac(const Menjac &);		// prijateljska funkcija
};

#endif // MENJAC_HPP_INCLUDED
