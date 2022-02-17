#ifndef DETE_HPP_INCLUDED
#define DETE_HPP_INCLUDED

#include "dinstring.hpp"

enum Pol {DECAK, DEVOJCICA};

class Dete {
	protected:
		DinString nadimak;
		Pol pol;
		int uzrast;
		bool zngp;
	public:
		Dete() : nadimak(""), pol(DECAK), uzrast(3), zngp(true) {}
		Dete(const DinString &n, Pol p, int u, bool z) : nadimak(n), pol(p), uzrast(u), zngp(z) {}
		Dete(const Dete &d) : nadimak(d.nadimak), pol(d.pol), uzrast(d.uzrast), zngp(d.zngp) {}

		DinString getNadimak() const {
			return nadimak;
		}
		Pol getPol() const {
			return pol;
		}
		int getUzrast() const {
			return uzrast;
		}
		bool getZasluzen() const {
			return zngp;
		}

		friend ostream& operator<<(ostream &out, const Dete &d) {
			out << endl;
			out << "--- DETE ---" << endl;

			out << "Nadimak: " << d.nadimak << endl;
			out << "Uzrast: " << d.uzrast << endl;

			out << "Pol: ";
			switch(d.pol) {
				case DECAK:
					out << "DECAK." << endl;
					break;
				case DEVOJCICA:
					out << "DEVOJCICA." << endl;
					break;
				default:
					out << "NEPOZNATO." << endl;
				}

			out << "Zasluzen novogodnisnji paketic: ";
			out << (d.zngp ? "DA" : "NE") << endl;

			return out;
		}

};

#endif // DETE_HPP_INCLUDED
