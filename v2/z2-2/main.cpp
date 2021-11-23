#include <iostream>

#include "Televizor.hpp"

using namespace std;

void ispis(const Televizor &t){
    cout << "Ispis stanja TV-a: ";
    cout << "Stanje - ";
    switch(t.getStanje()){
        case UKLJUCEN:
            cout << "Ukljucen, ";
            break;
        case ISKLJUCEN:
            cout << "Iskljucen, ";
            break;
        case POKVAREN:
            cout << "Pokvaren, ";
            break;
        default:
            cout << "Nije definisano, ne zbunjuj mi program.";
            break;
    }
    cout << "kanal - " << t.getKanal() << ", zvuk - " << t.getZvuk() << endl;
}

int meni(){
    int i;

    cout << "Izaberite opciju: " << endl;
    cout << "1. Ukljuci TV." << endl;
    cout << "2. Iskljuci TV." << endl;
    cout << "3. Pokvari TV." << endl;
    cout << "4. Popravi TV." << endl;
    cout << "5. Pojacaj zvuk." << endl;
    cout << "6. Smanji zvuk." << endl;
    cout << "7. Sledeći kanal." << endl;
    cout << "8. Prethodni kanal." << endl;
    cout << "9. Ispisi stanje TV-a." << endl;
    cout << "10. Kraj." << endl;

    cin >> i;

    return i;
}

int main()
{
    Televizor t;
    int i;

    do {
        i = meni();

        switch(i) {

            case 1:
                if (t.ukljuci()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 2:
                if (t.iskljuci()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 3:
                if (t.pokvari()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 4:
                if (t.popravi()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 5:
                if (t.pojacajZvuk()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 6:
                if (t.smanjiZvuk()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 7:
                if (t.sledeciKanal()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 8:
                if (t.prethodniKanal()) {
                    cout << "Operacija je izvršena." << endl;
                } else {
                    cout << "Operacija nije izvršena." << endl;
                }
                break;

            case 9:
                ispis(t);
                break;

            case 10:
                cout << "Ende." << endl;
                break;

            default:
                cout << "Operacija ne postoji." << endl;
                break;
        }

    cout << endl;

    } while (i!=10);

    return 0;
}
