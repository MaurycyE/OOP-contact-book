#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZadresatami.h"
#include "UzytkownikMenager.h"

using namespace std;


class AdresatMenager {
public:

    AdresatMenager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika): plikZadresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika) {
        adresaci = plikZadresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    int usunAdresata();
    void podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata();
    void edytujAdresata();


private:
    Adresat adresat;
    vector <Adresat> adresaci;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    Adresat podajDaneNowegoAdresata();
    PlikZadresatami plikZadresatami;
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();

};

#endif // ADRESATMENAGER_H
