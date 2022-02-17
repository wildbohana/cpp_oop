#ifndef NOVOGODISNJIPAKETIC_HPP_INCLUDED
#define NOVOGODISNJIPAKETIC_HPP_INCLUDED

#include "paketic.hpp"

class NovogodisnjiPaketic : public Paketic {
	protected:
		int minUzr;
		static int napravljeniNGP;
	public:
		NovogodisnjiPaketic() : Paketic(), minUzr(2) {
			++napravljeniNGP;
		}
		NovogodisnjiPaketic(const DinString &o, const Dete &d, int mu) : Paketic(o, d), minUzr(mu) {
			++napravljeniNGP;
		}
		~NovogodisnjiPaketic() {
			--napravljeniNGP;
		}

		int getMU() const {
			return minUzr;
		}
		int getNapravljeni() const {
			return napravljeniNGP;
		}

		bool isporuci() {
			if(Paketic::spakuj() && namenjen.getZasluzen()) {
				status = ISPORUCEN;
				cout << "Novogodisnji paketic ce uskoro biti isporucen." << endl;
				cout << "Primalac je:" << namenjen.getNadimak() << endl;
				return true;
			}
			cout << "Novogodisnji paketic ne moze biti isporucen." << endl;
			return false;
		}

		void ispisi() const {
			cout << "~ Paketic ~" << endl;
			cout << "Opis: " << opis << endl;
			cout << "Namenjen: " << namenjen << endl;

			cout << "Status: ";
			switch(status) {
				 case NAPRAVLJEN:
                    cout << "napravljen" << endl;
                    break;
                case SPAKOVAN:
                    cout << "spakovan" << endl;
                    break;
                case ISPORUCEN:
                    cout << "isporucen" << endl;
                    break;
                default:
                    cout << "nepoznat" << endl;
            }

            cout << "Minimalan uzrast: " << minUzr << endl;
			}

};

#endif // NOVOGODISNJIPAKETIC_HPP_INCLUDED
