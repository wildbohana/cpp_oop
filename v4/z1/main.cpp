#include <iostream>

using namespace std;

#include "jstrougao.hpp"

int main()
{
	Trougao t1, t2(2, 5, 6);

    cout << t1.getO() << endl;
    cout << t1.getP() << endl;
    cout << endl;

    JKTrougao jkt1, jkt2(2,3);

    cout << jkt1.getO() << endl;
    cout << jkt2.getP() << endl;
    cout << endl;

    JSTrougao js1, js2(4), js3(js2);

    cout << js3.getO() << endl;

    return 0;
}
