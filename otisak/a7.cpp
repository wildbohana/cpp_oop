// Apstraktne i virtualne klase: 

class A {
	int x; 
	public: 
		virtual void m() {} 	// stara verzija
		int getX() {return x;}
}; 

class B : public A {
	public:						// mora ovo sranje svuda inače ga automatski proglasi za private
		void m() {}				// nova (redefinisana) verzija
};

int main() {
	A a; 
	a.m();			// stara verzija

	B b; 
	b.m();			// nova verzija

	A *pa;			// pokazivač na roditeljski deo 
	pa = &b; 
	pa -> m();		// nova verzija

	return 0;
}

/*
A a; 		-- NE MOŽEMO NAPRAVITI OBJEKAT APSTRAKTNE KLASE!
a.getX();
*/