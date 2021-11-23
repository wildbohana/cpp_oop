#include <iostream>

using namespace std;

#include "krug.hpp"
#include "pravougaonik.hpp"
#include "valjak.hpp"

int main()
{
    Krug k, k2(5);
    cout << "Krug 1 - R = " << k.getR() << ", O = " << k.getO() << ", P = " << k.getP() << endl;

    Pravougaonik p1, p2(3,5), p3(4);
    cout << "Pravougaonik p3 - a = " << p3.getA() << ", b = " << p3.getB() << endl;

    Valjak v, v2(3,5);
    cout << "Valjak 2 - r = " << v2.getR() << ", h = " << v2.getH() << ", P = " << v2.getV() << ", V = " << v2.getV() << endl;

    return 0;
}
