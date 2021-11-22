#include <iostream>

using namespace std;

bool prestupna(int godina)
{
    if (godina % 4 != 0){
        return false;
    } else if (godina % 400 == 0){
        return true;
    } else if (godina % 100 == 0){
        return false;
    } else {
        return true;
    }
}

int main()
{
    int godina;
    bool tacno;

    cout << "Unesite godinu: " << endl;
    cin >> godina;

    tacno = prestupna(godina);

    if (tacno) {
        cout << "Godina " << godina << " je prestupna." << endl;
    } else {
        cout << "Godina " << godina << " nije prestupna." << endl;
    }
}
