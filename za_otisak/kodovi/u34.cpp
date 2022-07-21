// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include<iostream>
using namespace std;

// U klasi A su sva polja i metode protected
class A {
	protected:
		int x, y;
	protected:
		A(int xx = 1, int yy = 1) : x(xx), y(yy) {}
		int pomnozi() {return x * y;}
		int saberi() {return x + y;}
};

// Tako da će sva nasleđena polja i metode iz A biti protected i u B
class B : public A {
	private:
		int z;
	public:
		B(int xx = 1, int yy = 2, int zz = 3) : z(zz) {}
		int pomnozi() {return x * y * z;}
};

int main() {
	B b1, b2(1,2,3);
	// Metoda saberi() je protected u klasi A (znači i u klasi B)
	// Greška: main() ne može da pristupi protected metodi
	cout << b1.saberi() << b2.pomnozi();
	
	return 0;
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.
