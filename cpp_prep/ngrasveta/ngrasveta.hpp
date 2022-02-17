#ifndef NGRASVETA_HPP_INCLUDED
#define NGRASVETA_HPP_INCLUDED

#include "lampion.hpp"
#include "list.hpp"

class NovogodisnjaRasveta {
	protected:
		List<Lampion *> lampioni;
		int kapacitet;
	public:
		NovogodisnjaRasveta() : lampioni(), kapacitet(5) {}

		int getKapacitet() const {
			return kapacitet;
		}
		void setKapacitet(const int k) {
			this -> kapacitet = k;
		}

		// jebemti pokazivaci sad kako idu :(
		bool dodaj(Lampion &l) {
			if(lampioni.size() >= kapacitet) {
				cout << "Kapacitet je popunjen." << endl;
				return false;
			} else {
				if(!l.getIspravan()) {
					l.popravi();
				}

				if(l.getIspravan() && (l.getMaterijal() == STIROPOR)) {
					return lampioni.add(1, &l);
				}
				else if (l.getIspravan() && (l.getMaterijal() != STIROPOR)) {
					return lampioni.add(lampioni.size() + 1, &l);
				}
				else {
					return false;
				}
			}
		}

		void sortiraj() {
			int izbor;
			cout << "Izbor sortiranja: [0 - opadajuce / 1 - rastuce] : " << endl;
			cin >> izbor;

			if(izbor == 0) {
				if(lampioni.empty()) {
					cout << "Nema lampiona!" << endl;
					return;
				}
				else if(lampioni.size() >= 2) {
					Lampion *l1, *l2;

					for(int i = 1; i < lampioni.size() - 1; i++) {
						for(int j = i+1; j < lampioni.size(); j++) {
							lampioni.read(i, l1);
							lampioni.read(j, l2);

							if(l1 -> getCena() < l2 -> getCena()) {
								lampioni.remove(i);
								lampioni.add(i, l2);
								lampioni.remove(j);
								lampioni.add(j, l1);
							}
						}
					}
				}

				Lampion *l;
				for(int i = 1; i <= lampioni.size(); i++) {
					lampioni.read(i, l);
					l -> ispis();
				}
			}
			else if(izbor == 1) {
				if(lampioni.empty()) {
					cout << "Nema lampiona!" << endl;
					return;
				}
				else if(lampioni.size() >= 2) {
					Lampion *l1, *l2;

					for(int i = 1; i < lampioni.size() - 1; i++) {
						for(int j = i+1; j < lampioni.size(); j++) {
							lampioni.read(i, l1);
							lampioni.read(j, l2);

							if(l1 -> getCena() > l2 -> getCena()) {
								lampioni.remove(i);
								lampioni.add(i, l2);
								lampioni.remove(j);
								lampioni.add(j, l1);
							}
						}
					}
				}

				Lampion *l;
				for(int i = 1; i <= lampioni.size(); i++) {
					lampioni.read(i, l);
					l -> ispis();
				}
			}
			else {
				cout << "Nevalidan izbor sortiranja," << endl;
			}
		}

		void sprovediAkciju(double procenat) {
			double koeficijent = 1 - (procenat / 100);
			double tmpCena;

			Lampion *l;
			for(int i = 1; i <= lampioni.size(); i++) {
				lampioni.read(i, l);
				tmpCena = l -> getCena();
				tmpCena *= koeficijent;
				l -> setCena(tmpCena);
			}
		}

		friend ostream& operator<<(ostream &out, const NovogodisnjaRasveta &nr) {
			out << "***** NOVOGODISNJA RASVETA *****" << endl;

			for(int i = 1; i <= nr.lampioni.size(); i++) {
				Lampion *l;
				nr.lampioni.read(i, l);
				l -> ispis();
			}

			return out;
		}
};


#endif // NGRASVETA_HPP_INCLUDED
