// Za generičku klasu S, ispravno napisan destruktor bi bio?

template<class A, class B, class C, int LEN>
class S {
	private:
		A *a;			// Dinamički niz -> treba delete[]
		B b[LEN];		// Statički niz  -> sam se obriše
		C *c;			// dinamički niz -> treba delete[]
	public:
		S() {a = new c[3]; c = new c; }
};

// ~S() {delete[] a; delete[] c;}
