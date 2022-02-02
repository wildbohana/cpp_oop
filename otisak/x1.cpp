// Postfiksni i prefiksni

x++ - Vraca vrednost x pa uveca x za jedan
++x - Uvecava x pa onda vraca tu vrednost

Za prefiksni samo uvecas pa stavis return *this
Za postfiksni pravis lokalni objekat koji dobija vrednost objekta domaćina, uvećavaš domaćina i vraćaš VREDNOST tog lokalnog objekta

Tako da:
- ovaj što ima Complex& će biti prefiksni
- ovaj što ima Complex će biti postfiksni

Kod postfiksnog vraćaš vrednost a ne adresu objekta pošto se taj lokalni objekat najverovatnije odmah uništava nakon zavrsetka metode (u zavisnosti kako se ponasa STACK)

U pricnipu, profesor je rekao da se ne stavlja referenca kod tog drugog, jer bi to bilo "kao da dajes adresu stanovanja nekome da može da ti piše, a ti se upravo seliš", baš zbog tog uništavanja lokalnog objekta
