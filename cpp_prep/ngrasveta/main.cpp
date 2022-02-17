#include <iostream>

using namespace std;

#include "ngrasveta.hpp"
#include "lampion.hpp"

int Lampion::instance = 0;

int main()
{
	Lampion l1, l2(METAL, false, 342.12), l3(STIROPOR, true, 123.10), l4(PLASTIKA, false, 100);l1.ispis();
    l2.ispis();

    l1.setCena(100); l1.getCena();
    l1.getInstance(); l2.getIspravan();
    l2.getMaterijal(); l2.setIspravan(false);
    l2.setMaterijal(STIROPOR);

    cout << (l1.popravi() == true ? "POPRAVKA USPESNA!" : "NEUSPESNA POPRAVKA!") << endl;
    cout << (l1.popravi() == true ? "POPRAVKA USPESNA!" : "NEUSPESNA POPRAVKA!") << endl;
    cout << (l2.popravi() == true ? "POPRAVKA USPESNA!" : "NEUSPESNA POPRAVKA!") << endl;


	NovogodisnjaRasveta nr;

    cout << endl << (nr.dodaj(l1) == true ? "LAMPION DODAT!" : "NEUSPESNO DODAVANJE!");
    cout << endl << (nr.dodaj(l2) == true ? "LAMPION DODAT!" : "NEUSPESNO DODAVANJE!");
    cout << endl << (nr.dodaj(l3) == true ? "LAMPION DODAT!" : "NEUSPESNO DODAVANJE!");
    cout << endl << (nr.dodaj(l4) == true ? "LAMPION DODAT!" : "NEUSPESNO DODAVANJE!");
    cout << endl << (nr.dodaj(l4) == true ? "LAMPION DODAT!" : "NEUSPESNO DODAVANJE!");
    cout << endl << (nr.dodaj(l1) == true ? "LAMPION DODAT!" : "");

    cout << "KAPACITET: " << nr.getKapacitet() << endl << endl;


    cout << "Pre popusta." << endl;

	nr.sortiraj();
    nr.sprovediAkciju(20);

    cout << "Posle akcije." << endl;

    return 0;
}
