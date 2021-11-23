#ifndef JSTROUGAO_HPP_INCLUDED
#define JSTROUGAO_HPP_INCLUDED

#include "jktrougao.hpp"

class JSTrougao : public JKTrougao {
	public:
		// moze ovo i onako kao inace, a moze i ovako
		JSTrougao() {
			a = 3;
			b = 3;
			c = 3;
		}
		JSTrougao(int aa) : JKTrougao(aa, aa) {}
		JSTrougao(const JSTrougao &jst) : JKTrougao(jst.a, jst.c) {}
};


#endif // JSTROUGAO_HPP_INCLUDED
