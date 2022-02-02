// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream> 
using namespace std;
class A {
	public:
		A() {cout << "A1";}
		~A() {cout << "A2";}
};

class B : public A {
	public:
		B() {cout << "B1";}  	// konstruktor za potklasu B prvo mora da stvori natklasu A pa tek onda stvara i potklasu B
		~B() {cout << "B2";}	// a destruktor za potklasu B prvo uništava potkasu B pa posle toga uništava natklasu A
};

int main() {
	A a; 
	B b;
	return 0;
}

// ISPIS: A1A1B1B2A2A2

/*
Kod ispisa će se prvo pozvati roditeljska klasa A pa tek onda klasa naslednica B
I onda ćemo za klasu A imati ispis A1, a za klasu B A1B1
Destruktori se pozivaju suprotnim redosledom od konstruktora -> B2A2A2
*/