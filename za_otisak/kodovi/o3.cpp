// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	public:
		int x, y;
	public:
		A() {x = 1; y = 2;}
		~A() {cout << x << y;}
		friend ostream& operator<<(ostream &out, const A& a) {
			out<<a.x<<a.y;
			return out;
		}
};

void fun2(A a) {a.x = 2; a.y = 2;}
void fun1(A& a) {a.x = 1; a.y = 1;}

int main() {
	A a;			// x = 1, y = 2

	fun1(a);		// Šaljemo referencu od a i menjamo x i y u 1,1 i te promene ostaju
	cout << a;		// 11

	fun2(a);		// Pravimo lokalnu kopiju objekta koji ima vrednosti 22
					// Odmah po završetku ove funkcije se poziva destruktor
					// I on ispisuje vrednosti x i y tog objekta koji su 22
					// 22

	return 0;		// Poziva se destruktor za objekat a čiji su x i y nepromenjeni
					// 11
}

// ISPIS: 112211

// FUNKCIJE IMAJU LOKALNE OBJEKTE KOJI SE UNIŠTAVAJU ČIM IZAĐEMO IZ TE FUNKCIJE
// TADA SE POZVAJU DESTRUKTORI
