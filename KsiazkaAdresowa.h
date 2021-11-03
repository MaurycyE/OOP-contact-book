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
    string nazwaPlikuZUzytkownikami;


       Uzytkownik podajDaneNowegoUzytkownika();
       int pobierzIdNowegoUzytkownika();
       bool czyIstniejeLogin(string login);
       void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
       string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
       string konwerjsaIntNaString(int liczba);
       bool czyPlikJestPusty(fstream &plikTekstowy);

        public:
        /** Default constructor */
        KsiazkaAdresowa();
        /** Default destructor */
        ~KsiazkaAdresowa();
        void rejestracjaUzytkownika ();
        void wypiszWszystkichUzytkownikow();







};

#endif // KSIAZKAADRESOWA_H
