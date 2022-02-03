// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	private:
		int a, b;
	public:
		A() {a = 1; b = 2;}
		A(int aa = 1, int bb = 2) {a = aa; b = bb;}
		// ova dva se svode na isto tako da će biti overloaded A() - greška
		A(const A& aa) {a = aa.a; b = aa.b;}
		void ispis() {cout << ++a << b++;}	
};

int main() {
	A a, a2(3, 4), a3(a2);
	a.ispis();
	a1.ispis();				// a1 nije inicijalizovano nigde
	a3.ispis();
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.

/*
Da nema linije 10 i da zamenimo a1 sa a2 ili da u liniji 11 izbacimo aa=1 i bb=2: 224444

a  = (1,2) -> ispis radi ++a i b++ -> 1 postaje 2, 2 ostaje 2, tek posle ispisa postane 3
a2 = (3,4) -> isto
a3 = (3,4) -> isto
*/
