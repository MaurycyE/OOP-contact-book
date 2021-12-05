#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "UzytkownikMenager.h"
#include "AdresatMenager.h"

using namespace std;

class KsiazkaAdresowa {

    UzytkownikMenager uzytkownikMenager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    AdresatMenager *adresatMeneger;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami):uzytkownikMenager(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){

    adresatMeneger = NULL;
    };

    ~KsiazkaAdresowa() {

    delete adresatMeneger;
    adresatMeneger = NULL;
    };

    int logowanieUzytkownika();
    void wyswietlWszystkichAdresatow();
    void wylogujUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    bool czyUzytkownikJestZalogowany();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata();


};

#endif // KSIAZKAADRESOWA_H
