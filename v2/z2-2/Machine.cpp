#include "Machine.hpp"

Machine::Machine() {
    currentState = sC;
    value = V_MAX;
}

bool Machine::metodaX() {
    bool uspesno;

    if (currentState == sC || currentState == sB) {
        currentState = sA;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Machine::metodaY() {
    bool uspesno;

    if (currentState == sB || currentState == sD) {
        currentState = sC;
        value = V_MAX;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Machine::metodaZ() {
     bool uspesno;

    if (currentState == sA) {
        currentState = sB;
        value = V_MIN;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Machine::metodaW() {
     bool uspesno;

    if (currentState == sA) {
        currentState = sD;
        value = V_MIN;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Machine::mplus() {
    bool uspesno;

    if (currentState == sA && (value+V_STEP <= V_MAX)) {
        value += V_STEP;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

bool Machine::mminus() {
    bool uspesno;

    if (currentState == sA && (value-V_STEP >= V_MIN)) {
        value -= V_STEP;
        uspesno = true;
    } else {
        uspesno = false;
    }

    return uspesno;
}

MachineState Machine::getCurrentState() const {
    return currentState;
}

int Machine::getValue() const {
    return value;
}
