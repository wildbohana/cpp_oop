#include <iostream>

using namespace std;

enum vrstasortiranja {RASTUCE, OPADAJUCE};      // nabrojivi tip podataka

// unos niza
void unos(int* niz, int duzina)
{
    for (int i=0; i<duzina; i++) {
        cout << "niz[" << i << "] = ";
        cin >> niz[i];
    }
}

// ispis niza
void ispis(int* niz, int duzina)
{
    for (int i=0; i<duzina; i++){
        cout << "niz[" << i << "] = " << niz [i] << endl;
    }
}

// sortiranje niza
void sortiranje(int* niz, int duzina, vrstasortiranja vrsta)
{
    switch (vrsta) {

        // rastuće sortiranje
        case RASTUCE:
            for (int i=0; i<duzina-1; i++) {
                int minInd = i;
                for (int j=i+1; j<duzina; j++) {
                    if (niz[j] < niz[minInd]) {
                        minInd = j;
                    }
                }
                if (minInd != i) {
                    int temp = niz[i];
                    niz[i] = niz[minInd];
                    niz[minInd] = temp;
                }
        }
        break;

        // opadajuće sortiranje
        case OPADAJUCE:
            for (int i=0; i<duzina-1; i++) {
                int maxInd = i;
                for (int j=i+1; j<duzina; j++) {
                    if (niz[j] > niz[maxInd]) {
                        maxInd = j;
                    }
                }
                if (maxInd != i){
                    int temp = niz[i];
                    niz[i] = niz[maxInd];
                    niz[maxInd] = temp;
                }
        }
        break;
    }
}

// glavni baja u kraju
int main()
{
    int duzina;
    cout << "Unesi dužinu niza: ";
    cin >> duzina;

    if (duzina<=0){
        cout << "Dužina niza mora biti veća od nule.";
        return 0;
    }

    // new je malloc za c++
    int* niz = new int[duzina];

    unos(niz, duzina);
    cout << endl;
    sortiranje(niz, duzina, RASTUCE);
    ispis(niz, duzina);

    delete[] niz;          // free za c++

    return 0;
}
