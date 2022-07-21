// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class Y {
	private:
		int x;
	protected:
		Y() {r = 1; cout << x++;}
		Y(int rr) : x(x) {x = 2; cout << ++r;}
		Y(const S &rr) : r(rr.r) {x = 3; cout << x++;}
		~Y() {x = 0; cout << --x;}
};

int main() {
	S s2, s1(x2), s3(2);
	return 0;
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci
// Ovom kodu je bukvalno svaka linija pogrešna
