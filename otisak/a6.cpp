// Valjda šta će se desiti ovde, šta će se ispisati?

class A {
	A() {}					// prvi konstruktor
	A(int x) {} 			// drugi konstruktor
	A(const A &ra) {} 		// treći konstruktor
}; 

class B {
	A a; 
	B() : A(6) {}			// roditelj ima samo konstruktore, a konstruktori se ne nasleđuju -> u suštini ovim ništa nismo uradili
	a(6) {} 				// ne pozivamo konstruktor jer nemamo A ispred, a ovo nije definisano ni kao metoda -> ovde baca grešku (kako treba onda???)

	B(int y) : a(y) {} 				// drugi konstruktor bi bio pozvan da nam ovo gore radi
	B(const B &rb) : a(rb.a) {} 	// treći konstruktor bi bio pozvan da nam ovo gore radi
};

int main() {
	A a1, a2, a3;
	B b1, b2, b3;
	return 0; 
}

// Dobićemo upozorenje o grešci
