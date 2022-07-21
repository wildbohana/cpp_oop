// Šta će biti ispisano posle izvršavanja sledećeg koda?

#include <iostream>
using namespace std;

class A {
	private:
		int x, y;
	public:
		A() {x = 5; y = 5;}
		void petlja (int n) {
			for(int i = 0; i < n; i++) {
				x += y; y += x;
			}
		}
		friend ostream& operator<<(ostream &out, const A& a) {
			out << a.x << a.y << endl;
			return out;
		}
};

int main() {
	A a;				// x = 5, y = 5

	a.petlja(3);		// 0 iteracija: (10, 5); (10, 15)
						// 1 iteracija: (25, 15); (25, 40)
						// 2 iteracija: (65, 40); (65, 105)
	cout << a;
	return 0;
}

// ISPIS: 65105
