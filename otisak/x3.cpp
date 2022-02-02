Nasleđuju se polja i metode
Ne nasleđuju se konstruktori, destruktori i prijateljske metode

Članu klase koji je PRIVATE može se direktno prisupiti iz:
- metoda te klase
- prijateljskih funkcija te klase 

Članu klase koji je PROTECTED može se direktno prisupiti iz:
- metoda te klase
- prijateljskih funkcija te klase
- metoda potklase te klase

Izvedene klase mogu imati 3 vrste metoda:
1. nasleđene ("as is" od roditelja)
2. redefinisane (modifikovano ponašanje metode u odnosu na roditeljsku)
3. nove (karakteristične za potomka)

Klasa može da ima više natklasa:
- u C++ može
- u Javi ne može

Klasa može da implementira više interfejsa
Više klasa ne može da implementira jedan interfejs ???

Prijateljska funkcija može pristupati poljima označenim sa private.
