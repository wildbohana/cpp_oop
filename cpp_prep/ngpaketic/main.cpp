#include "dedaMraz.hpp"

int NovogodisnjiPaketic::napravljeniNGP = 0;

int main()
{
    Dete d1("Misa", DECAK, 7, true), d2("Jeca", DEVOJCICA, 5, true), d3("Laza", DECAK, 10, true), d4("Mica", DEVOJCICA, 3, true), d5(d4);

    NovogodisnjiPaketic np("autic na daljinsko upravljanje", d1, 5);
    cout << "Napravljeni NG paketici: " << np.getNapravljeni() << endl;

	{
		NovogodisnjiPaketic np1("plisani meda", d4, 4);
		cout << "Napravljeni NG paketici: " << np.getNapravljeni() << endl;
	}

	cout << "Napravljeni NG paketici: " << np.getNapravljeni() << endl;

	DedaMraz dm;
	dm.dodaj("vozic", d1, 5, DECAK);
    dm.dodaj("barbika", d2, 4, DEVOJCICA);
    dm.dodaj("lego kockice", d3, 9, DECAK);
    dm.dodaj("bratz lutka", d4, 7, DEVOJCICA);
    dm.dodaj("dinosaurus", d1, 3, DECAK);
    dm.dodaj("plisani meda", d2, 6, DEVOJCICA);
    dm.dodaj("avioncic", d3, 8, DECAK);
    dm.dodaj("emotivna sovica", d4, 6, DEVOJCICA);
    dm.dodaj("autic", d1, 4, DECAK);
    dm.dodaj("kofercic sa sminkom", d2, 5, DEVOJCICA);
    dm.dodaj("motoric", d3, 7, DECAK);
    dm.ispisi();

    cout << "Uspesno izbacivanje novogodisnjeg paketica: " << dm.izbaci(5) << endl;
    cout << "Prosecan minimalan uzrast: " << dm.prosecanMU() << endl;

    return 0;
}
