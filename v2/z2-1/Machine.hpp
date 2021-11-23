#ifndef MACHINE_HPP_INCLUDED
#define MACHINE_HPP_INCLUDED

#define V_MIN 0
#define V_MAX 80
#define V_STEP 20

enum MachineState {sA, sB, sC, sD};

class Machine {
    private:
        MachineState currentState;
        int value;
    public:
        Machine();

        bool metodaX();
        bool metodaY();
        bool metodaZ();
        bool metodaW();

        bool mplus();			// plus je ključna reč, parola snađi se
        bool mminus();			// ko bi reko, i minus je ključna reč

        MachineState getCurrentState() const;
        int getValue() const;
};

#endif
