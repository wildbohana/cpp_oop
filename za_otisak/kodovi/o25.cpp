// Šta će biti ispisano posle izvršavanja sledećeg koda?

class A {
	public:
		int x;
		int y;
		A(int xx = 1, int yy = 2) : x(xx), y(yy) {}
		void print() {cout << x << y;}
};

void f(A &a) {
	a.x++;
	a.y++;
}

int main() {
	A a1, a2;		// a1 -> 12, a2 -> 12
	f(a1);			// a1 -> 23
	a2 = a1;		// a2 -> 23
	f(a1);			// a1 -> 34
	f(a2);			// a2 -> 34

	a1.print();		// 34
	a2.print();		// 34
	
	return 0;
}

// ISPIS: 3434
