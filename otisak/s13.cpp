// Šta će biti ispisano posle izvršavanja sledećeg koda:

#include <iostream>
using namespace std;
#include <math.h>

class A {
	public:
		static int val1;
		A() {cout << "A" << val1;}
		~A() {cout << "A" << --val1;}
};

class B : public A {
	public:
	// nema ostatka koda 
};

// ISPIS: A8A8B8B7A6A5