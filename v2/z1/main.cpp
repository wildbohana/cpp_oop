#include <iostream>
#include <ctime>

#include "kocka.hpp"

using namespace std;

int meni() {			// slobodna funkcija - ne nalazi se ni u jednoj klasi (obična smrtnička funkcija)
    cout << "Izaberite opciju: " << endl;
    cout << "1. Baci kocku." << endl;
    cout << "2. Prikaži vrednost kocke." << endl;
    cout << "3. Kraj." << endl;
    cout << ">> " << endl;
    int n;
    cin >> n;
    return n;
}

int main()
{
    srand(time(NULL));		// uzima rand na osnovu vremena kada se izvršava program

    Kocka k1;			// konstruktor kojim smo napravili objekat
    Kocka k2(5);		// kocka sa vrednosti 5
    Kocka k3(k2);		// kopiramo k2

    // mora k1.getVrednost jer je polje vrednost u private sekciji objekta
    cout << "Vrednost za k1: " << k1.getVrednost() << endl;
    cout << "Vrednost za k2: " << k2.getVrednost() << endl;
    cout << "Vrednost za k3: " << k3.getVrednost() << endl;

    int n;
    do{
        n = meni();

        switch(n){
            case 1:
                k1.baci();
                cout << "Kocka je bačena." << endl;
                break;
            case 2:
                cout << "Vrednost kocke je: " << k1.getVrednost() << endl;
                break;
            case 3:
                cout << "Kraj programa." << endl;
                break;
            default:
                cout << "Opcija ne postoji, ya nasty." << endl;
                break;
        }
    } while (n!=3);

    return 0;
}


// ayo, ; ne ide na kraju funkcija i konstrukora jel?????
// šta se dešava kada se u liniji 23 pozove k1()
