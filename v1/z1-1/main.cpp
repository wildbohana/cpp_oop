#include <iostream>

using namespace std;

int main()
{
    int x = -1, najveci = 0;

    do {
        do {
            cout << "Unesite broj: " << endl;
            cin >> x;
        } while (x < 0);

        if (x==0){
            break;
        } else if (x > 0){
            if (x > najveci){
                najveci = x;
            }
        }
    } while (x > 0);

    cout << "Najveći broj je: " << najveci << endl;
    return 0;
}
