#ifndef VALJAK_HPP_INCLUDED
#define VALJAK_HPP_INCLUDED

#include <cmath>

#include "krug.hpp"
#include "pravougaonik.hpp"

class Valjak {
	private:
		Krug B;
		Pravougaonik M;
	public:
		Valjak (double rr = 1, double hh = 1) : B(rr), M(2*rr*M_PI, hh) {

		}
		double getR() const {
			return B.getR();
		}
		double getH() const {
			return M.getB();
		}
		double getP() const {
			return B.getP() + M.getP();
		}
		double getV() const {
			return B.getP() * getH();		// mo�e i M.getB() umesto getH()
		}
};

#endif // VALJAK_HPP_INCLUDED
