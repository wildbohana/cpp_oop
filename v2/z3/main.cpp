#include <iostream>
#include "XnaY.hpp"

using namespace std;

int main()
{
    XnaY xy;
    XnaY xxy(4,5);
    XnaY xyy(xxy);

    int x, y;

    cout << "Unesite vrednost za x: " << endl;
    cin >> x;
    xy.setX(x);

    cout << "Unesite vrednost za y: " << endl;
    cin >> y;
    xy.setY(y);

    xy.setX_Y(x,y);

    cout << endl << "Unet XnaY: " << endl;
    cout << "Vrednost x je: " << xy.getX() << ", vrednost y je : " << xy.getY();
    cout << ", a vrednost x na y je : " << xy.getXnaY() << endl;

    cout << endl << "Default XnaY: " << endl;
    cout << "Vrednost x je: " << xxy.getX() << ", vrednost y je : " << xxy.getY();
    cout << ", a vrednost x na y je : " << xxy.getXnaY() << endl;

    cout << endl << "Kopiran XnaY: " << endl;
    cout << "Vrednost x je: " << xyy.getX() << ", vrednost y je : " << xyy.getY();
    cout << ", a vrednost x na y je : " << xyy.getXnaY() << endl;

    return 0;
}
