// char& i char const

U principu,:
- ovaj što nema const može da služi i za pisanje i za čitanje
- ovaj što ima const može da služi samo za pisanje

Ovaj što nema const vraća referencu, odnosno već postojeci char
Ovaj što ima const se pravi kopija

Samo jedan će ići sa const

Postoje:
char& operator[](int i)
char operator[](int i) const

Ovaj prvi, sa referencom, će se koristiti svaki put sem u jednom slucaju zbog optimizacije jer mu je lakše da prosledi već postojeci char nego da pravi kopiju

A taj jedan jedini slučaj je kad imaš funkciju, nešto tipa:
void f(const Dinstring &ds) {cout << ds[5];}
E tu će sigurno morati da pozove onu drugu verziju zato što u parametru funkcije ima ono const
