#ifndef TELEVIZOR_HPP_INCLUDED
#define TELEVIZOR_HPP_INCLUDED

#define Z_MIN 0
#define Z_MAX 20
#define Z_STEP 1

#define K_MIN 1
#define K_MAX 5
#define K_STEP 1

enum StanjeTV {ISKLJUCEN, UKLJUCEN, POKVAREN};

class Televizor {

    private:
        StanjeTV trenutnoStanje;
        int zvuk;
        int kanal;

    public:
        Televizor();		 // nemoj ovo ikad više da ti padne na pamet da zaboraviš
        Televizor(const Televizor &);

        bool ukljuci();
        bool iskljuci();
        bool pokvari();
        bool popravi();

        bool pojacajZvuk();
        bool smanjiZvuk();
        bool sledeciKanal();
        bool prethodniKanal();

        StanjeTV getStanje() const;
        int getZvuk() const;
        int getKanal() const;
};

#endif // TELEVIZOR_HPP_INCLUDED
