// Primer za kompoziciju

// Ne znam šta je autor hteo da kaže, vrv da li se može pristupiti protected polju x?

class A {
	protected:
		int x;
};

class B {
	A a;
	void m() {a.x=10;}
};

// Ovo je kompozicija, ne nasleđivanje

// U klasi B se nije desilo nasleđivanje, nego kompozicija, pa neće moći da se pristupi
// Da se jeste izvršilo nasleđivanje (javno), mogli bi pristupiti polju x

// protected se ponaša kao private u kompoziciji
// a u nasleđivanju se ponaša kao public
