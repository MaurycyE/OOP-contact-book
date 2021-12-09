#ifndef UZYTKOWNIKMENAGER_H
#define UZYTKOWNIKMENAGER_H
#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include "PlikZuzytkownikami.h"
#include "AdresatMenager.h"

using namespace std;

class UzytkownikMenager {
public:

    UzytkownikMenager(string nazwaPlikuZUzytkownikami): plikZuzytkownikami(nazwaPlikuZUzytkownikami) {
        idZalogowanegoUzytkownika = 0;
        uzytkownicy=plikZuzytkownikami.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void wylogujUzytkownika ();
    bool czyUzytkownikJestZalogowany();

private:

    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZuzytkownikami plikZuzytkownikami;

};



#endif // UZYTKOWNIKMENAGER_H
