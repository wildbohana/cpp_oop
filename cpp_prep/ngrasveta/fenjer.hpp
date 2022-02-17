#ifndef FENJER_HPP_INCLUDED
#define FENJER_HPP_INCLUDED

enum Materijal {STIROPOR, PLASTIKA, METAL};

class Fenjer {
	protected:
		Materijal materijal;
		bool ispravan;
	public:
		Fenjer() : materijal(STIROPOR), ispravan(false) {}
		Fenjer(Materijal m, bool isp) : materijal(m), ispravan(isp) {}

		Materijal getMaterijal() const {
			return materijal;
		}
		bool getIspravan() const {
			return ispravan;
		}

		void setMaterijal(const Materijal m) {
			this -> materijal = m;
		}
		void setIspravan(const bool isp) {
			this -> ispravan = isp;
		}

		virtual bool popravi() = 0;

		void ispis() const {
			cout << "~ Fenjer ~" << endl;

			cout << "Materijal: ";
			switch(materijal) {
				case STIROPOR:
					cout << "stiropor." << endl;
					break;
				case PLASTIKA:
					cout << "plastika." << endl;
					break;
				case METAL:
					cout << "metal." << endl;
					break;
				default:
					cout << "nepoznato." << endl;
				}

			cout << "Ispravan: ";
			cout << (ispravan ? "DA" : "NE") << endl;
		}
};


#endif // FENJER_HPP_INCLUDED
