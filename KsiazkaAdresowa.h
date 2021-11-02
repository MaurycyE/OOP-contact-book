#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include <vector>
#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa
{


    //protected:

        vector <Uzytkownik> uzytkownicy;
        int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;


       Uzytkownik podajDaneNowegoUzytkownika();
       int pobierzIdNowegoUzytkownika();
       bool czyIstniejeLogin(string login);

        public:
        /** Default constructor */
        KsiazkaAdresowa();
        /** Default destructor */
        ~KsiazkaAdresowa();
        void rejestracjaUzytkownika ();
        void wypiszWszystkichUzytkownikow();







};

#endif // KSIAZKAADRESOWA_H
