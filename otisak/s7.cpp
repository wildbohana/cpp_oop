// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	protected:
		int a;
	public:
		A(int aa = 0) : a(aa) {++a;}
		friend bool operator!=(const A& a1, const A& a2) {
			if(a1.a < a2.a)
				return 1;
			else if(a1.a > a2.a)
				return 0;
			else if(a1.a == a2.a)
				return 1+1;
			else
				return 1-1;
		}
};

int main() {
	A a1, a2(2), a3(3), a4(4);
	// svuda će se vratiti vrednost 1 jer važi relacija a1<a2 koja vraća vrednost 1 u redefinisanom operatoru !=
	cout << (a1 != a2) << (a2 != a3) << !(a1 != a2) << !(a3 != a4) << endl;
	//		1				1			!(1)			!(1)
	//		1				1			0				0
	return 0;
}

// ISPIS: 1100