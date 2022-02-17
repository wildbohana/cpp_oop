#ifndef DEDAMRAZ_HPP_INCLUDED
#define DEDAMRAZ_HPP_INCLUDED

#include "novogodisnjiPaketic.hpp"
#include "list.hpp"

class DedaMraz {
	protected:
		List<NovogodisnjiPaketic> NGpaketici;
	public:
		DedaMraz() : NGpaketici() {}

		bool dodaj(const DinString &o, const Dete &d, int mu, Pol trazen) {
			NovogodisnjiPaketic novi(o, d, mu);
			novi.isporuci();

			int brojac = 0;
			NovogodisnjiPaketic temp;

			if(NGpaketici.empty()) {
				return NGpaketici.add(1, novi);
			} else {
				for(int i = 1; i <= NGpaketici.size(); i++) {
					NGpaketici.read(i, temp);
					if(temp.getNamenjen().getPol() == trazen) {
						brojac++;
					}
				}

				if (brojac > 5) {
					return false;
				} else {
					return NGpaketici.add(NGpaketici.size() + 1, novi);
				}
			}
		}

		bool izbaci(int uslov) {
			NovogodisnjiPaketic temp;
			for(int i = 1; i <= NGpaketici.size(); i++) {
				NGpaketici.read(i, temp);
				if(temp.getMU() < uslov) {
					return NGpaketici.remove(i);
				}
			}
			return false;
		}

		double prosecanMU() {
			double suma = 0;
			NovogodisnjiPaketic temp;
			for(int i = 1; i <= NGpaketici.size(); i++) {
				NGpaketici.read(i, temp);
				suma += temp.getMU();
			}
			return suma /= NGpaketici.size();
		}

		void ispisi() const {
			cout << "********* DEDA MRAZ *********" << endl;

			if(NGpaketici.empty()) {
				cout << "Vreca Deda Mraza je prazna." << endl;
			} else {
				NovogodisnjiPaketic temp;
				for(int i = 1; i <= NGpaketici.size(); i++) {
					NGpaketici.read(i, temp);
					temp.ispisi();
				}
			}
		}

};


#endif // DEDAMRAZ_HPP_INCLUDED
