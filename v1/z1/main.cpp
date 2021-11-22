#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    int n, i, x;

    cout << "Koliko brojeva želite da sabirate?" << endl;
    cin >> n;

    if (n<1) {
        cout << "Morate uneti pozitivan broj." << endl;
        return 69;
    } else {
        for (i=0; i<n; i++){
            cout << "Unesite broj: ";
            cin >> x;
            suma += x;
        }
    }

    cout << "Suma iznosi " << suma << endl;
    return 0;
}
