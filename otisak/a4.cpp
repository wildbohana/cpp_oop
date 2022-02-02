// Preklapanje parametara

int IntArray::operator[](int i) const {		// nema & - kopira
	cout << "Prva verzija"; 
	return el[i]; 
}; 

int& IntArray::operator[](int i) {			// ima & - referencira
    cout << "Druga verzija"; 
    return el[i]; 
}; 

int main() {
	obj[i];				// ne znamo koja verzija će biti pozvana

	IntArray ia; 
	ia[5] = 10;

	cout << ia[5]; 		// pozvaće drugu verziju zbog optimalnosti kompajlera - više mu odgovara da referencira nego da kopira
	return 0;
}

void f(const IntArray& ria) {
	cout << ria[6];		// zbog const pozvaće prvu verziju!
}

/*
Preklapanje operatora ne menja prioritete operatora
Primer: x=y+z; => prvo se izvršava +, pa =
*/