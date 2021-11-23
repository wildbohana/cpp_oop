#include <iostream>

#include "Machine.hpp"

using namespace std;

void printInfo(const Machine &m){
    cout << "Print machine: ";
    cout << "State - ";
    switch(m.getCurrentState()){
        case sA:
            cout << "sA";
            break;
        case sB:
            cout << "sB";
            break;
        case sC:
            cout << "sC";
            break;
        case sD:
            cout << "sD";
            break;
        default:
            cout << "Nedefinisano";
            break;
    }
    cout << ", Value - " << m.getValue() << endl;
}

int meni(){
    int i;

    cout << "Choose operation: " << endl;
    cout << "1. Method X: " << endl;
    cout << "2. Method Y: " << endl;
    cout << "3. Method Z: " << endl;
    cout << "4. Method W: " << endl;
    cout << "5. Plus: " << endl;
    cout << "6. Minus: " << endl;
    cout << "7. Print machine info: " << endl;
    cout << "8. Exit." << endl;
    cout << "-> ";

    cin >> i;

    return i;
}

int main()
{
    Machine m;
    int i;

    do {
        i = meni();

        switch(i) {

            case 1:
                if (m.metodaX()) {
                    cout << "Operation successful." << endl;
                } else {
                    cout << "Operation unsuccessful." << endl;
                }
                break;

            case 2:
                if (m.metodaY()) {
                    cout << "Operation successful." << endl;
                } else {
                    cout << "Operation unsuccessful." << endl;
                }
                break;

            case 3:
                if (m.metodaZ()) {
                    cout << "Operation successful." << endl;
                } else {
                    cout << "Operation unsuccessful." << endl;
                }
                break;

            case 4:
                if (m.metodaW()) {
                    cout << "Operation successful." << endl;
                } else {
                    cout << "Operation unsuccessful." << endl;
                }
                break;

            case 5:
                if (m.mplus()) {
                    cout << "Operation successful." << endl;
                } else {
                    cout << "Operation unsuccessful." << endl;
                }
                break;

            case 6:
                if (m.mminus()) {
                    cout << "Operation successful." << endl;
                } else {
                    cout << "Operation unsuccessful." << endl;
                }
                break;

            case 7:
                printInfo(m);
                break;

            case 8:
                cout << "End." << endl;
                break;

            default:
                cout << "Option unavailable." << endl;
                break;
        }

    cout << endl;

    } while (i!=8);

    return 0;
}
