// Primer za nasleđivanje klasa i razlikama

// Da li možemo da uradimo ovakvo nasleđivanje n puta? (ne možemo)

// Ovaj deo i nije toliko bitan za pitanje (više je kao uvod u materiju):
class A {
	protected: 
		int x; 
}; 

class B : private A {    	// private može da se nasledi kad god
		void m() {x = 5;}
}; 

class C : public B {    	// ali kasnije ne može da se vrati na public
	void n() {x=10;}
}; 

// Ovaj deo je bitan:

// Podrazumevano nasleđivanje je private
// Ako se jednom nasledi private, ne može da se vrati na public
class A1 {
	public: 
		void m() { ..... }
}; 

class A2 : public A1 {
};

...

class An : public An-1 {
}; 

// Dobićemo grešku kad pokrenemo main()
int main() {
	obj.m(); 
	return 0;
}

// Ne može da se izvrši n puta
