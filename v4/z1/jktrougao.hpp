#ifndef JKTROUGAO_HPP_INCLUDED
#define JKTROUGAO_HPP_INCLUDED

#include "trougao.hpp"

class JKTrougao : public Trougao {
	public:
		JKTrougao() : Trougao(1, 2, 2) {}
		JKTrougao(int aa, int bb) : Trougao(aa, bb, bb) {}
		JKTrougao(const JKTrougao &jkt) : Trougao(jkt.a, jkt.b, jkt.c) {}
};


#endif // JKTROUGAO_HPP_INCLUDED
