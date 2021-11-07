#ifndef UZYTKOWNIKMENAGER_H
#define UZYTKOWNIKMENAGER_H
#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include "PlikZuzytkownikami.h"

using namespace std;

class UzytkownikMenager
{
    public:
        /** Default constructor */
        UzytkownikMenager();
        /** Default destructor */
        ~UzytkownikMenager();
        void rejestracjaUzytkownika();
        void wypiszWszystkichUzytkownikow();
        void wczytajUzytkownikowZPliku();

    //protected:

    private:
        int idZalogowanegoUzytkownika;
        vector <Uzytkownik> uzytkownicy;

        Uzytkownik podajDaneNowegoUzytkownika();
       int pobierzIdNowegoUzytkownika();
       bool czyIstniejeLogin(string login);
        PlikZuzytkownikami plikZuzytkownikami;



};

#endif // UZYTKOWNIKMENAGER_H
