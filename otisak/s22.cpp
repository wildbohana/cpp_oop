// Šta će se ispisati posle izvršavanje slećeg koda?

#include <iostream>
using namespace std;
#include <math.h>

class T {
	public:
		static int t;
		T() {++t;}
};

class S : public T {
	public:
		static int s;
		S() {++s;}
		~S() {s++;}
		S test() {
			S ss;			// stvaramo objekat S
			return ss;		// po završetku funkcije se uništava objekat S
		}
};

int T::t = pow(2,2);		// t = 4
int S::s = sqrt(16);		// s = 4

int main() {
	T t1;					// t = 5
	S s1, s2, s3;			// s = 7, t = 8		(4+3, 5+3) (zbog 3 konstuktora klase S)

	s2.test();				// s = 8, t = 9, i pošto je test() funkcija, kada se ona završi poziva se destruktor za S koji povećava s za 1
	cout << S::s << T::t;	// s = 9, t = 9

	return 0;
}

// 99