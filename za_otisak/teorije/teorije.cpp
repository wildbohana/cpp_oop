// Teorije C++


/*
Koji iskazi su tačni:
1. Jedna klasa može direktno naslediti samo jednu klasu
2. Virtuelna metoda je isto što i apstraktna
3. Konstruktori se nasleđuju
4. Prijateljska funkcija može pristupati poljima označenim sa private

- Tačan je samo pod samo 4.
*/


/*
Date su rečenice:
1. Konstruktor je metoda koja kreira objekat.
2. Mogu se preklopiti operatori samo za klasne tipove.
3. Operatori se preklapaju putem operatorskih metoda.
4. Podrazumevani konstruktor je metoda koja samo kreira objekat.

- Tačne su sve rečenice.
*/


/*
Koje su tačne rečenice:
1. Postoje pokazivaci na reference.
2. Ne postoje pokazivači na reference.
3. Referenca je alternativno ime za neki podatak.
4. Postoje nizovi referenci.

- Samo 2. i 3.
*/


/*
Koje su tačne rečenice:
1. U C++u program mora da ima tacno jednu main metodu.
2. U C++u postoji obrada izuzetaka (try-catch blok).
3. U C++u postoje interfejsi.
4. U C++u svaka napisana klasa mora biti u zasebnom fajlu.

- Tačna rečenica je samo pod 2.
*/


/*
Koji od ovih preklopljenih operatora su isparvno napisani?
1. friend ostream& operator<<(ostream&, const DinString&);
2. friend ostream& operator<<(const ostream&, const DinString&);
3. friend DinString operator==(const DinString&, const DinString&);
4. friend bool operator==(const DinString&, const DinString&);
5. Dinstring& operator=(const DinString&);

- Tačni su odgovori pod 1, 4, 5
*/


/*
Kako bi smo u klasi Complex preklopili binarni operator +?
1 class Complex {
2 Complex operator+(const Complex&, const Complex&);
3 Complex& operator+(const Complex&, const Complex&};
4 friend Complex operator+(const Complex&, const Complex&};‚
5 friend Complex& operator+(const Complex&, const Complex&};
6 };

- Linija 4 je ispravno napisana.
*/


/*
Koje rečenice su tačne?
1. Virtuelna metoda je apstraktna metoda koja nema telo.
2. Apstraktna klasa je klasa koja sadrži makar jednu virtuelnu metodu.
3. Apstraktna metoda je virtuelna metoda koja nema telo.
4. Potklasa može imati više natklasa.

- Samo 3. je tačna
*/


/*
Označiti NETAČAN odgovor:
1. Operator new se koristi za dinamičko alociranje memorijskog prostora.
2. Apstraktna klasa je klasa koja sadrži makar jednu apstraktnu metodu.
3. Operator delete se koristi za oslobađanje dinamički alociranog memorijskog prostora.
4. Operator this se koristi za dinamičko alociranje memorijskog prostora.

- Netačan je samo pod 4.
*/


/*
Označiti NETAČAN odgovor:
1. Metoda se proglašava virtuelnom tako što se ispred tipa metode navede ključna reč virtual.
2. Postoje pokazivači na reference.
3. Virtuelnost se nasleđuje.
4. Ne postoje pokazivači na reference.

- Netačan je samo pod 2.
*/


/*
Koje rečenice su tačne?
1. Definicija metode ne sadrži telo metode.
2. Definicija metode se mora pisati unutar tela klase.
3. Deklaracija metode ne sadrži telo metode.
4. Deklaracija metode se mora pisati unutar tela klase.

- Tačni su 3. i 4.
*/


/*
Označiti tačno napisane preklopljene operatore indeksiranja:
1. bool& operator[] (int);
2. char& operator[] (char);
3. bool operator[] (int)const;
4. bool& operator[] (char);
5. double operator[] (int);

- Tačno su napisani operatori pod 1. i 3.
*/


/*
Označiti tačno napisane preklopljene operatore indeksiranja:
1. float operator[] (int)const;
2. char& operator[] (int);
3. float& operator[] (char);
4. bool operator[] (int)const;
5. char& operator[] (char);

- Tačno su napisani operatori pod 1, 2, 4
*/


/*
Označiti NETAČAN odgovor:
1. Ne postoje nizovi referenci.
2. Prilikom definisanja, reference moraju da se inicijalizuju nekim podatkom (već u memoriji).
3. Prava pristupa članu klase mogu biti: private, protected, public i global.
4. Članu klase koji se nalazi u private-segmentu može se pristupati samo iz unutrašnjosti klase.
5. Reference se pridružuju nekom podatku koji se već nalazi u memoriji.
6. Reference ne zauzimaju prostor u memoriji.

- Netačno je samo pod 3.
*/


/*
Označiti tačne rečenice:
1. U apstraktnoj klasi sve metode moraju biti apstraktne.
2. Konstruktor uvek vraća vrednost.
3. Destruktor može ali ne mora imati parametre.
4. Prijateljska funkcija je član klase.

- Nijedno nije tačno
*/


/*
Označiti tačne rečenice:
1. Konstruktor mora da ima isto ime kao klasa.
2. Klasa može da nasledi više od jedne klase.
3. Podrazumevani konstruktor je isto što i prazan konstruktor.

- Tačne su rečenice 1. i 2.
*/


/*
Koji iskazi su tačni?
1. Konstruktor služi da napravi objekat.
2. Destruktor se poziva automatski.
3. Kompozicija je veza između klasa.
4. Public članovima se može pristupiti iz unutrašnjosti klase.
5. Apstraktna klasa je klasa koja sadrži bar jednu apstraktnu metodu.

- Svi iskazi su tačni
*/


/*
Koje od sledećih rečenica su tačne?
1. Konstruktor je metoda koja kreira objekat.
2. Mogu se preklopiti operatori samo za klasne tipove.
3. Operatori se preklapaju putem operatorskih metoda.
4. Podrazumevani konstruktor je metoda koja samo kreira objekat.

- Sve rečenice su tačne.
*/


/*
Koje su rečenice tačne:
1. Postoje pokazivači na reference.
2. Ne postoje pokazivači na reference.
3. Referenca je alternativno ime za neki podatak.
4. Postoje nizovi referenci.

- Tačne su rečenice pod 2. i 3.
*/
