// Šta će biti ispisano na ekranu nakon izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class X {
	private:
		int y;
	public:
		X(int yy = 0) {y = yy;}
		const X operator++(int a) {		// postfiksni (nema &)
			cout << "1";
			X x(y);
			y++;
			return x;
		}
		int getY() {return y;}
		const X& operato++() {			// prefiksni (ima &)
			cout << "2";
			y++;
			return *this;
		}
};

int main() {
	X x(2);					// y = 2

	x++;					// postfiksni: ispiše 1, y=3 zbog inkrementa
	cout << x.getY();		// 3

	++x; 					// prefiksni: ispiše 2, y=4 zbog inkrementa
	cout << x.getY();		// 4

	return 0;
}

// ISPIS: 1324