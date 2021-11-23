#include "kocka.hpp"

// konstruktor bez parametara
Kocka::Kocka() {
    vrednost = 1;
}

// konstruktor sa parametrima
Kocka::Kocka(int v) {
    vrednost = v;
}

// konstruktor kopije
Kocka::Kocka(const Kocka &k) {
    vrednost = k.vrednost;
}

int Kocka::getVrednost() const {
    return vrednost;
}

void Kocka::baci() {
    vrednost = rand()%6+1;
}
