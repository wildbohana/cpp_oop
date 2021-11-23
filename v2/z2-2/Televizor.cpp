#include "Televizor.hpp"

Televizor::Televizor() {
    trenutnoStanje = ISKLJUCEN;
    zvuk = 0;
    kanal = 1;
}

Televizor::Televizor(const Televizor &t){
    trenutnoStanje = t.trenutnoStanje;
    kanal = t.kanal;
    zvuk = t.zvuk;
}

bool Televizor::ukljuci() {
    bool uspesno;

    if (trenutnoStanje == ISKLJUCEN) {
        trenutnoStanje = UKLJUCEN;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Televizor::iskljuci() {
    bool uspesno;

    if (trenutnoStanje == UKLJUCEN) {
        trenutnoStanje = ISKLJUCEN;
        zvuk = 0;
        kanal = 1;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Televizor::pokvari() {
    bool uspesno;

    if (trenutnoStanje == ISKLJUCEN || trenutnoStanje == UKLJUCEN) {
        trenutnoStanje = POKVAREN;
        zvuk = 0;
        kanal = 1;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Televizor::popravi() {
    bool uspesno;

    if (trenutnoStanje == POKVAREN) {
        trenutnoStanje = ISKLJUCEN;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Televizor::pojacajZvuk() {
    bool uspesno;

    if (trenutnoStanje == UKLJUCEN && (zvuk+Z_STEP <= Z_MAX)) {
        zvuk += Z_STEP;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Televizor::smanjiZvuk() {
    bool uspesno;

    if (trenutnoStanje == UKLJUCEN && (zvuk-Z_STEP >= Z_MIN)) {
        zvuk -= Z_STEP;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Televizor::sledeciKanal() {
    bool uspesno;

    if (trenutnoStanje == UKLJUCEN && (kanal+K_STEP <= K_MAX)) {
        kanal += K_STEP;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Televizor::prethodniKanal() {
    bool uspesno;

    if (trenutnoStanje == UKLJUCEN && (kanal-K_STEP >= K_MIN)) {
        kanal -= K_STEP;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

StanjeTV Televizor::getStanje() const {
    return trenutnoStanje;
}

int Televizor::getZvuk() const {
    return zvuk;
}

int Televizor::getKanal() const {
    return kanal;
}
