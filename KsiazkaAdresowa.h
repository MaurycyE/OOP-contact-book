#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "UzytkownikMenager.h"

using namespace std;

class KsiazkaAdresowa {

    UzytkownikMenager uzytkownikMenager;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami):uzytkownikMenager(nazwaPlikuZUzytkownikami){

    uzytkownikMenager.wczytajUzytkownikowZPliku();
    uzytkownikMenager.logowanieUzytkownika();

    //uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika(uzytkownikMenager.logowanieUzytkownika());

    };

};

#endif // KSIAZKAADRESOWA_H
