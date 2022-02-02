// Ne znam šta je autor hteo da kaže, vrv da li se može pristupiti protected polju x?
// Ja sam dopisala klasu A da bi pokušala da kodu dam smisao

class A {
	protected:
		int x;
};

class B {
	A a;
	void m() {a.x=10;}
};

// U klasi B se nije desilo nasleđivanje pa neće moći da se pristupi
// Da se jeste izvršilo nasleđivanje, i dalje ne bi mogli pristupiti polju x, jer je on protected

// protected se ponaša kao private, osim za izvedenu klasu