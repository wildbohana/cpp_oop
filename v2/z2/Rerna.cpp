#include "Rerna.hpp"

Rerna::Rerna() {
    trenutnoStanje = ISKLJUCENA;
    temperatura = 0;
}

bool Rerna::ukljuci() {
    bool uspesno;

    if (trenutnoStanje == ISKLJUCENA) {
        trenutnoStanje = UKLJUCENA;
        temperatura += KORAK;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Rerna::iskljuci() {
    bool uspesno;

    if (trenutnoStanje == UKLJUCENA) {
        trenutnoStanje = ISKLJUCENA;
        temperatura = T_MIN;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Rerna::pokvari() {
    bool uspesno;

    if (trenutnoStanje != POKVARENA) {
        trenutnoStanje = POKVARENA;
        temperatura = T_MIN;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Rerna::popravi() {
    if (trenutnoStanje == POKVARENA) {
        trenutnoStanje = ISKLJUCENA;
        temperatura = T_MIN;			// može ali ne mora
        return true;
    }

    return false;				// ovo je kao umesto pomoćne promenljive uspesno
}

bool Rerna::pojacajTemperaturu() {
    bool uspesno = false;

    if (trenutnoStanje == UKLJUCENA && (temperatura+KORAK <= T_MAX)) {
        temperatura += KORAK;
        uspesno = true;
    }

    return uspesno;				// malo drugačija implementacija uspesno
}

bool Rerna::smanjiTempleraturu() {
    bool uspesno = false;

    if (trenutnoStanje == UKLJUCENA && (temperatura-KORAK >= T_MIN)) {
        temperatura -= KORAK;
        uspesno = true;
    }

    return uspesno;
}

StanjeRerne Rerna::getTrenutnoStanje() const {
    return trenutnoStanje;
}

int Rerna::getTemperatura() const {
    return temperatura;
}
