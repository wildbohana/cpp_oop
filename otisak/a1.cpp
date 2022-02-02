// Da li možemo pozvati obe funkcije istovremeno?
// Da li bi došlo do konstruktora kopije?

void f(MyClass  rmc) {} 

void f(const MyClass *rmc) {}

int main() {
    MyClass x; 
    f(x); 
}

// Ne možemo ih pozvati istovremeno - javio bi grešku
// U prvom bi k.k. napravio kopiju, u drugom ne bi došlo do k.k
