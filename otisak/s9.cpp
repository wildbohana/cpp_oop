// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class T {
	public:
		T() {cout << "1";}
		virtual void show() {cout << "2";}
};

class Q : public T {
	public:
		Q() {cout << "3";}
		void show() {cout << "4";}
		~Q() {cout << "5";}
};

int main() {
	T t;			// 1
	Q q;			// 13 - prvo se poziva natklasa T (ispis 1) pa se onda pravi potklasa Q (ispis 3)

	T *pokT;
	t.show();		// originalno show (ispis 2)

	pokT = &q;
	pokT -> show();	// redefinisan show (ispis 4)
	return 0;		// destruktor za Q (ispis 5)
}

// ISPIS: 113245