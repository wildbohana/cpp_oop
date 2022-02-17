#include "permica.hpp"

int Pernica::drvenihBojicaNaAkciji = 0;

int main()
{
	Bojica b1(23.9, DRVENA, "zelena"), b2(57.4, VOSTANA, "plava"), b3(45.6, DRVENA, "zuta"), b4(68.3, VOSTANA, "bela");

    Pernica p;

    p.dodajUPonudu(b1);
    p.dodajUPonudu(b2);
    p.dodajUPonudu(b3);
    p.dodajUPonudu(b4);
    cout << p << endl;

    p.akcija("zuta");
    cout << p << endl;

    return 0;
}
