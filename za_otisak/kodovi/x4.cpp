// Koji kod predstavlja primer kompozicije, a koji primer nasleđivanja?
// (poprilično očigledno iz imena)

class A {
	private:
		int a;
	public:
		A() {a = 1;}
};
class Kompozicija {
	private:
		A nazivObjekta;
	public:
		Kompozicija() : nazivObjekta() {}
};


class A {
	private:
		int a;
	public:
		A() {a = 1;}
};
class Naslednik : public A {
	public:
		Naslednik() : A() {}
};
