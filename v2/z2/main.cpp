#include <iostream>

#include "Rerna.hpp"

using namespace std;

void ispisiRernu(const Rerna &r) {
    cout << "Ispis rerne: ";
    cout << "Stanje - ";
    switch(r.getTrenutnoStanje()) {
        case UKLJUCENA:
            cout << "Ukljucena.";
            break;
        case ISKLJUCENA:
            cout << "Iskljucena.";
            break;
        case POKVARENA:
            cout << "Pokvarena.";
            break;
        default:
            cout << "Nepoznato. YA NASTY, NE ZBUNJUJ MI PROGRAM.";
            break;
    }
    cout << ", Temperatura - " << r.getTemperatura() << endl;
}

int meni(){
    int i;

    cout << "Izaberite opciju: " << endl;
    cout << "1. Ukljuci rernu." << endl;
    cout << "2. Iskljuci rernu." << endl;
    cout << "3. Popravi rernu." << endl;
    cout << "4. Pokvari rernu." << endl;
    cout << "5. Pojacaj temperaturu." << endl;
    cout << "6. Smanji temperaturu." << endl;
    cout << "7. Ispisi rernu." << endl;
    cout << "8. Kraj." << endl;

    cin >> i;

    return i;
}

int main()
{
    Rerna r;
    int i;

    do {
        i = meni();

        switch(i) {

            case 1:
                if (r.ukljuci()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 2:
                if (r.iskljuci()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 3:
                if (r.popravi()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 4:
                if (r.pokvari()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 5:
                if (r.pojacajTemperaturu()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 6:
                if (r.smanjiTempleraturu()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 7:
                ispisiRernu(r);
                break;

            case 8:
                cout << "Kraj." << endl;
                break;

            default:
                cout << "Opcija ne postoji. YA NASTY, NE ZBUNJUJ MI PROGRAM." << endl;
                break;
        }

    } while (i != 8);

    return 0;
}
