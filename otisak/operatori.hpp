// BROJEVI I TO

// =
Complex& Complex::operator=(const Complex &z)
// +=
Complex& Complex::operator+=(const Complex &z)
// *=
Complex& Complex::operator*=(const Complex &z)

// +
friend Complex operator+(const Complex&, const Complex&)
// *
friend Complex operator*(const Complex&, const Complex&)
// ==
friend bool operator==(const Complex&, const Complex&)
// <<
friend ostream& operator<<(ostream&, const Complex&)

// DINSTRING I TO

// []
// zbog optimalnosti kompajlera, uvek će pozvati referencu (1. verziju sa &)
//kopija će se pozvati samo ako imamo neku funkciju sa const u sebi
char& operator[] (int);
char operator[] (int) const;
// =
DinString& operator=(const DinString&);
// +=
DinString& operator+=(const DinString&);

// ==
friend bool operator==(const DinString&, const DinString&);
// ==
friend bool operator!=(const DinString&, const DinString&);
// !=
friend DinString operator+(const DinString&, const DinString&);
// <<
friend ostream& operator<<(ostream&, const DinString&);
