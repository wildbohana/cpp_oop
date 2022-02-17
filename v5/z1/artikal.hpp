#ifndef ARTIKAL_HPP_INCLUDED
#define ARTIKAL_HPP_INCLUDED

#include "dinstring.hpp"
#include <iomanip>

class Artikal{
    private:
        DinString naziv;
        double cena;
        static int instanci;		// moras inicijalizovati negde
    public:
        Artikal(const char[],const double);
        Artikal(const DinString&, const double);
        Artikal(const Artikal&);
        ~Artikal();

        friend ostream& operator<<(ostream& ,const Artikal&);		// prespajanje operatora ili kako se to vec zove
};

#endif // ARTIKAL_HPP_INCLUDED
