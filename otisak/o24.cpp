// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	protected:
		int x, y;
	protected:
		A(int xx = 1, int yy = 1) : x(xx), y(yy) {}
		int pomnozi() {return x * y;}
		int saberi() {return x + y;}
};

class B : public A {
	private:
		int z;
	public:
		B(int xx = 1, int yy = 2, int zz = 3) : z(zz) {}
		int pomnozi() {return x * y * z;}
		// pomnozi() je protected u A tako da ne može biti u public delu za B
};

int main() {
	B b1, b2(1,2,3);
	cout << b1.saberi() << b2.pomnozi();
	return 0;
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.

// Da je klasa A imala public umesto protected, ispis bi bio 23
// b1 bi imao vrednosti 1,1 -> zbir 1+1 = 2
// b2 bi imao vrednosti 1,1,3 -> proizvod 1*1*3 = 3

// Da bi u class B u public imali A(xx, yy) kod
// B(int xx = 1, int yy = 2, int zz = 3) : A(xx, yy), z(zz) {}
// Onda bi ispis bio 363