#include <iostream>

using namespace std;

#include "automobil.hpp"

void ispisiSkoljku(const Skoljka &s) {
	cout << "Skoljka: " << endl;
	cout << "- Boja: ";

	switch(s.getBojaSkoljke()) {
	case PLAVA:
		cout << "Plava." << endl;
		break;
	case ZELENA:
		cout << "Zelena." << endl;
		break;
	case CRVENA:
		cout << "Crvena." << endl;
		break;
	}
}

void ispisiMenjac(const Menjac &m) {
	cout << "Menjac: " << endl;
	cout << "- Brzina: " << m.brojBrzina << endl;
	cout << "- Tip: " << (m.tip == AUTOMATIK ? "Automatik." : "Manuelni.") << endl;
}

void ispisiAutomobil(const Automobil &a) {
	cout << "--- ISPIS AUTOMOBILA ---" << endl;
	ispisiMenjac(a.m);
	ispisiSkoljku(a.s);
	cout << "Automobil: " << endl;
	cout << "- Stanje: ";

	switch(a.getStanjeAutomobila()) {
	case UGASEN:
		cout << "Ugasen." << endl;
		break;
	case POKVAREN:
		cout << "Pokvaren." << endl;
		break;
	case U_VOZNJI:
		cout << "U voznji." << endl;
		break;
	default:
		cout << "Nije definisano." << endl;
		break;
	}
	cout << "------------------------" << endl << endl;
}

int meni() {
	cout << "1.  Upali automobil." << endl;
	cout << "2.  Ugasi automobil." << endl;
	cout << "3.  Pokvari automobil." << endl;
	cout << "4.  Popravi automobil." << endl;
	cout << "5.  Povecaj brzinu." << endl;
	cout << "6.  Smanji brzinu." << endl;
	cout << "7.  Promeni boju u plavu" << endl;
	cout << "8.  Promeni boju u crvenu" << endl;
	cout << "9.  Promeni boju u zelenu" << endl;
	cout << "10. Promeni menjac u automatik." << endl;
	cout << "11. Promeni menjac u manuelni." << endl;
	cout << "0.  Kraj." << endl;

	int n;
	cin >> n;
	cout << endl;
	return n;
}

int main()
{
	Automobil a;
	int n;

	do {
		n = meni();

		switch(n) {
			case  1: a.upali(); break;
			case  2: a.ugasi(); break;
			case  3: a.pokvari(); break;
			case  4: a.popravi(); break;
			case  5: a.povecajBrzinu(1); break;
			case  6: a.smanjiBrzinu(1); break;
			case  7: a.setBojaSkoljke(PLAVA); break;
			case  8: a.setBojaSkoljke(CRVENA); break;
			case  9: a.setBojaSkoljke(ZELENA); break;
			case 10: a.setTipMenjaca(AUTOMATIK); break;
			case 11: a.setTipMenjaca(MANUELNI); break;
			case  0: cout << "Kraj."; break;
			default: cout << "Nepostojeca operacija." << endl;
		}
		ispisiAutomobil(a);

	} while (n != 0);

    return 0;
}
