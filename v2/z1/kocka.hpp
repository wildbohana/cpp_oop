#ifndef KOCKA_HPP_INCLUDED		// proverava da li je definisano (includeguard)
#define KOCKA_HPP_INCLUDED		// ako nije definisano, definiši ga, ako jeste, ne koristi ga opet

#include <cstdlib>			// includujep biblioteke za cpp obde

class Kocka {
    private:				// sekcija - vidljivo samo unutar same klase
        int vrednost;
    public:				// može svako da pristupi, metode ovde idu
        Kocka();			// prazan konstruktor (bez parametara)
        Kocka(int);			// može i ime ali ne mora, tip je dovoljan
        Kocka(const Kocka &);		// konstruktor kopije, može ali ne mora const, & obavezno

        void baci();
        int getVrednost() const;	// const - kada se pozove ova metoda
        				// neće doći do promene polja koje se nalaze u klasi

};					// obavezno ; ovde



#endif // KOCKA_HPP_INCLUDED

// polja - promenljive, metoda - funkcije
