#include <iostream>
#include <cmath>            // c lib za math
#include <iomanip>          // za manipulaciju ispisa

using namespace std;

double funkcija (int n)
{
    double x=0;

    for (int i=1; i<=n; i++) {
        x += sqrt(i);
    }

    return x;
}

int main()
{
    int n;
    double rez;

    cout << "Unesite pozitivan ceo broj: " << endl;
    cin >> n;

    if (n<1) {
        cout << "Nije unet pozitivan ceo broj." << endl;
        return 0;
    }

    rez = funkcija(n);

    cout << fixed << setprecision(2);
    cout << "Rezultat je: " << rez << endl;

    return 0;
}
