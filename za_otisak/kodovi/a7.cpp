// Primer za apstraktne i virtualne metode: 

class A {
	int x; 
	public: 
		virtual void m() {} 	// stara verzija metode
		int getX() {return x;}
}; 

class B : public A {
	public:						// mora ovo svuda inače ga automatski proglasi za private
		void m() {}				// nova (redefinisana) verzija metode
};

int main() {
	A a; 
	a.m();			// stara verzija

	B b; 
	b.m();			// nova verzija

	A *pa;			// pokazivač na roditeljski deo 
	pa = &b; 		// koji pokazuje na izvedenu klasu
	pa -> m();		// nova verzija

	// basically, pokazivač ode u klasu A, vidi da je metoda virtuelna
	// ode u klasu B, vidi da je redefinisana, pozove je
	// da metoda ne bi bila redefinisana u B, pozvao bi staru verziju

	return 0;
}
