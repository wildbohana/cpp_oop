#ifndef PERMICA_HPP_INCLUDED
#define PERMICA_HPP_INCLUDED

#include "list.hpp"
#include "bojica.hpp"

class Pernica {
	protected:
		List<Bojica> bojice;
		List<Bojica> bojiceNaAkciji;
		static int drvenihBojicaNaAkciji;
	public:
		Pernica() : bojice(), bojiceNaAkciji() {}

		bool dodajUPonudu(const Bojica b) {
			if(b.getTip() == DRVENA) {
				return bojice.add(bojice.size() + 1, b);
			}
			return bojice.add(1, b);
		}


		bool akcija(const DinString &trazena) {
			Bojica b;

			for(int i = 1; i <= bojice.size(); i++) {
				bojice.read(i, b);
				if(b.getBoja() == trazena && b.postaviCenu() && bojice.remove(i)) {
					cout << "Uspesna realizacija akcije." << endl;

					if(b.getTip() == DRVENA) {
						++drvenihBojicaNaAkciji;
					}

					return bojiceNaAkciji.add(1, b);
				}
			}
			cout << "Akcija nije primenjena." << endl;
			return false;
		}

		friend ostream &operator<<(ostream &out, const Pernica &p) {
			out << "-------- PERNICA --------" << endl;

			if(p.bojice.size() == 0) {
				out << "Lista bojica je prazna." << endl;
			} else {
				Bojica b;
				out << "U pernici se nalaze sledece bojice: " << endl;

				for(int i = 1; i <= p.bojice.size(); i++) {
					p.bojice.read(i, b);
					out << b;
				}
			}

			if(p.bojiceNaAkciji.empty()) {
				out << "Lista bojica je prazna." << endl;
			} else {
				Bojica b;
				out << "U pernici se nalaze sledece bojice koje su na akciji: " << endl;

				for(int i = 1; i <= p.bojiceNaAkciji.size(); i++) {
					p.bojiceNaAkciji.read(i, b);
					out << b;
				}
			}

			out << "Broj drvenih bojica na akciji: " << drvenihBojicaNaAkciji << endl;

			return out;
		}

};

#endif // PERMICA_HPP_INCLUDED
