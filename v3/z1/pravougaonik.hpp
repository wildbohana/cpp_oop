#ifndef PRAVOUGAONIK_HPP_INCLUDED
#define PRAVOUGAONIK_HPP_INCLUDED

class Pravougaonik {
	private:
		double a;
		double b;
	public:
		Pravougaonik(double aa = 1, double bb = 2){			// 1 je podrazumevana za a, 2 je podrazmevana za b
			a = aa;
			b = bb;
		}
		double getA() const {
			return a;
		}
		double getB() const {
			return b;
		}
		double getO() const {
			return 2*(a+b);
		}
		double getP() const {
			return a*b;
		}

};

#endif // PRAVOUGAONIK_HPP_INCLUDED
