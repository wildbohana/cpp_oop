/*
Koji iskazi su tačni:
1. Jedna klasa može direktno naslediti samo jednu klasu
2. Virtuelna metoda je isto što i apstraktna
3. Konstruktori se nasleđuju
4. Prijateljska funkcija može pristupati poljima označenim sa private

+ samo 4
- samo 1
- samo 1, 3, i 4
- samo 3
- svi iskazi su tačni
- samo 2 i 3
- samo 2, 3 i 4
*/

// Primer koji demonstrira da je u C++ moguće direktno nasleđivanje više drugih klasa

class A {
	protected:
		int a;
	public:
		A() {a = 1;}
};

class B {
	protected:
		int b;
	public:
		B() {b = 2;}
};

class C : public A, B {
	private:
		int c;
	public:
		C() {cout << "c = " << a + b << endl;}
};

int main() {
	C c;
	return 0;
}