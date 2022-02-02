/////  OPERATOR = - preklapa se operatorskom metodom
Complex& Complex::operator=(const Complex &z) {
	re = z.re;
	im = z.im;
	return *this;
}

/////  OPERATOR += - preklapa se operatorskom metodom
Complex& Complex::operator+=(const Complex &z) {
	re += z.re;
	im += z.im;
	return *this;
}

/////  OPERATORI -=, *=, /= - preklapaju se operatorskom metodom
Complex& Complex::operator*=(const Complex &z) {
	double r = re*z.re - im*z.im;
	double i = re*z.im + im*z.re;
	re=r; im=i;
	return *this;
}

/////  OPERATOR + - preklapa se slobodnom funkcijom
// prototip (kao tip funkcije ide Compleks - bez & !)
friend Complex operator+(const Complex&, const Complex&);
// realizacija
Complex operator+(const Complex &z1, const Complex &z2) {
	Complex w(z1.re + z2.re, z1.im + z2.im);
	return w;
}

/////  OPERATORI -, *, / - kao tip funkcije ide Complex (bez &)
Complex operator*(const Complex &z1, const Complex &z2) {
	double r = z1.re*z2.re - z1.im*z2.im;
	double i = z1.re*z2.im + z1.im*z2.re;
	Complex w(r, i);
	return w;
}

/////  OPERATORI ==, != - preklapaju se prijateljskim funkcijama
bool operator==(const Complex &z1, const Complex &z2) {
	if(z1.re==z2.re && z1.im==z2.im)
	return true;
	else
	return false;
}

/////  OPERATOR << - kao tip funkcije ide ostream
ostream& operator<<(ostream &out, const Complex &z) {
	if(z.re==0 && z.im!=0) out << z.im << "i";
	if(z.re!=0 && z.im==0) out << z.re;
	if(z.re!=0 && z.im>0) out << z.re << "+" << z.im << "i";
	if(z.re!=0 && z.im<0) out << z.re << z.im << "i";
	return out;
}
