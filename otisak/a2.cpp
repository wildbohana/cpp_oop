// Da li možemo da uradimo ovakvo nasleđivanje n puta? (ne možemo)

class A {
	protected: 
		int x; 
}; 

class B : private A {    	// private može da se nasledi
		void m() {x = 5;}
}; 

class C : public B {    	// ali kasnije ne može da se vrati na public
	void n() {x=10;}
}; 

class A1 {
	public: 
		void m() { ..... }
}; 

class A2 : public A1 {
};

...

class An : public An-1 {
}; 

int main() {
	obj.m(); 
	return 0;
}
