// Data je generička klasa MyTemplate

// class - osnovni tipovi poput int, double, char

template<***>
class MyTemplate {
	private:
		A el;			// Najopštiji slučaj koji bi pokrio sve mogućnosti je class
		A x[B];			// Radi se o nizu koji ima B elemenata - mora int
		C y[10];		// Najopštiji slučaj koji bi pokrio sve mogućnosti je class
	public:
		...
};

/*
Umesto *** može da stoji:
- class A, int B, int C
+ class A, int B, class C
- class A, class B, class C
- int A, int B, int C
- int A, class B, class C
- int A, int B, class C
*/