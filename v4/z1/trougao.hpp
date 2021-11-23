#ifndef TROUGAO_HPP_INCLUDED
#define TROUGAO_HPP_INCLUDED

#include <cmath>

class Trougao {
	protected:
		int a, b, c;
	public:
		Trougao() {
			a = 3;
			b = 4;
			c = 5;
		}

		Trougao(int aa, int bb, int cc) {
			a = aa;
			b = bb;
			c = cc;
		}

		Trougao(const Trougao &t) {
			a = t.a;
			b = t.b;
			c = t.c;
		}

		int getA() const {
			return a;
		}

		int getB() const {
			return b;
		}

		int getC() const {
			return c;
		}

		void setA(int aa) {
			a = aa;
		}

		void setB(int bb) {
			b = bb;
		}

		void setV(int cc) {
			c = cc;
		}

		int getO() const {
			return a + b + c;
		}

		int getP() const {
			double s = getO() / 2.0;
			return sqrt(s * (s - a) * (s-b) * (s - c));
		}
};


#endif // TROUGAO_HPP_INCLUDED
