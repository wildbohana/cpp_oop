#ifndef RERNA_HPP_INCLUDED
#define RERNA_HPP_INCLUDED

#define T_MIN 0
#define T_MAX 220
#define KORAK 20

enum StanjeRerne {ISKLJUCENA, UKLJUCENA, POKVARENA};

class Rerna {
    private:
        StanjeRerne trenutnoStanje;
        int temperatura;

    public:
        Rerna();

        bool ukljuci();
        bool iskljuci();
        bool pokvari();
        bool popravi();

        bool pojacajTemperaturu();
        bool smanjiTempleraturu();

        StanjeRerne getTrenutnoStanje() const;
        int getTemperatura() const;
};

#endif
