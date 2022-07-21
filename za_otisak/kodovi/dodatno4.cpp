// Šta će biti ispisano na ekranu nakon izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	private:
		int a;
	public:
		A(int aa = 0) {a = aa;}
		A& operator+=(const A &a1) {
			a += a1.a;
			return *this;
		}
		friend A operator+(const A &a1, const A &a2) {
			A b(a1.a + a2.a);
			return b;
		}
		int getA() const {return a;}
};

int main() {
	A a, a1(3), a2(1);			// a - 0; a1 - 3; a2 - 1

	a = a1 + a2;				// operator + je preklopljen -> a=3+1=4
	cout << a.getA();			// 4

	a2 += 2;					// operator += je preklopljen -> a=1+2=3
	cout << a2.getA();			// 3

	if (a1 == a2) cout << 1;	// greška u kodu, operator == nije redefinisan
	else cout << 0;
	
	return 0;
}

// Dobili bismo upozorenje o grešci u kodu
