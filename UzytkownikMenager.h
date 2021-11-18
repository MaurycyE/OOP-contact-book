#ifndef UZYTKOWNIKMENAGER_H
#define UZYTKOWNIKMENAGER_H
#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include "PlikZuzytkownikami.h"
#include "AdresatMenager.h"

using namespace std;

class UzytkownikMenager
{
    public:

        UzytkownikMenager(string nazwaPlikuZUzytkownikami): plikZuzytkownikami(nazwaPlikuZUzytkownikami) {};
        void rejestracjaUzytkownika();
        void wypiszWszystkichUzytkownikow();
        void wczytajUzytkownikowZPliku();
        int logowanieUzytkownika();
        void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
        int pobierzIdZalogowanegoUzytkownika();
        void wylogujUzytkownika ();

    private:

        int idZalogowanegoUzytkownika;
        vector <Uzytkownik> uzytkownicy;
        Uzytkownik podajDaneNowegoUzytkownika();
       int pobierzIdNowegoUzytkownika();
       bool czyIstniejeLogin(string login);
        PlikZuzytkownikami plikZuzytkownikami;



};



#endif // UZYTKOWNIKMENAGER_H
