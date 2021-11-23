#include "XnaY.hpp"
#include <cmath>


// xnayovi
XnaY::XnaY() {
    x = 1;
    y = 1;
    vrednost = 1;
}

XnaY::XnaY(int a, int b) {
    x = a;
    y = b;
    vrednost = pow(x,y);
}

XnaY::XnaY(const XnaY &n) {
    x = n.x;
    y = n.y;
    vrednost = n.vrednost;
}


// voidovi
void XnaY::setX(int iks) {
    x = iks;
}

void XnaY::setY(int ips) {
    y = ips;
}

void XnaY::setX_Y(int iks, int ips) {
    vrednost = pow(iks, ips);
}


// intovi
int XnaY::getX() const {
    return x;
}

int XnaY::getY() const {
    return y;
}

double XnaY::getXnaY() const {
    return vrednost;
}
