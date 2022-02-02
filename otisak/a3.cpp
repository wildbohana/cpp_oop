// Statička polja

class A {
    public:						// ili private - svejedno je
        void m() const; 
};

void A::m() const {...}			// bitno je da se ne zaboravi A:: i const

class A {
	public:
		A() {};
		A(int x) {};
		A(int x, double y) {};
		A(const A &ra) {};
};

int main() {
	// u zavisnosti od vrste parametra, odgovarajući konstruktor će biti pozvan
	A a1, a2(3), a3(3, 5.4), a4(a1);
	return 0;
}
