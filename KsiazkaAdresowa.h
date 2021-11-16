#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "UzytkownikMenager.h"
#include "AdresatMenager.h"

using namespace std;

class KsiazkaAdresowa {

    UzytkownikMenager uzytkownikMenager;
    AdresatMenager adresatMeneger;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami):uzytkownikMenager(nazwaPlikuZUzytkownikami), adresatMeneger(nazwaPlikuZAdresatami){

    uzytkownikMenager.wczytajUzytkownikowZPliku();
    uzytkownikMenager.logowanieUzytkownika();
    adresatMeneger.ustawIdZalogowanegoUzytkownika(uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
    adresatMeneger.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    //adresatMeneger.dodajAdresata();

    adresatMeneger.wyswietlWszystkichAdresatow();
    //uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika(uzytkownikMenager.logowanieUzytkownika());

    };

};

#endif // KSIAZKAADRESOWA_H
