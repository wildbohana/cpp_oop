#include <iostream>

using namespace std;

double racunanje(int brojk, double cena = 50) {
    return brojk*cena;
}

int main()
{
    int brojk = 0;
    char izbor;

    cout << "Unesite broj karata koje želite da kupite: " << endl;
    cin >> brojk;

    do {
        cout << "Da li želite da unesete cenu karte [y/n] ?" << endl;
        cin >> izbor;
    } while(izbor != 'y' && izbor != 'n');

    if (izbor == 'y') {
        double cena = 0.0;

        cout << "Cena karte:";
        cin >> cena;

        cout << "Svota novca potrebna za karte je " << racunanje(brojk, cena) << "dinara." << endl;
    } else {
        cout << "Svota novca potrebna za karte je " << racunanje(brojk) << "dinara." << endl;
    }

    return 0;
}
