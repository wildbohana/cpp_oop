// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	private:
		int a, b;
	public:
		// Overloaded A()
		// Konstrukor bez parametara i konstruktor sa predefinisanim vrednostima se svode na isto
		A() {a = 1; b = 2;}
		A(int aa = 1, int bb = 2) {a = aa; b = bb;}
		A(const A& aa) {a = aa.a; b = aa.b;}
		void ispis() {cout << ++a << b++;}	
};

int main() {
	A a, a2(3,4), a3(a2);
	a.ispis();
	a1.ispis();
	a3.ispis();
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci

// Greška 1: overloaded A()
// Greška 2: u main-u se koristi a1 koji nigde nije definisan
