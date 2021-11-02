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

        public:
        /** Default constructor */
        KsiazkaAdresowa();
        /** Default destructor */
        ~KsiazkaAdresowa();
        void rejestracjaUzytkownika (vector <Uzytkownik> &uzytkownicy);




};

#endif // KSIAZKAADRESOWA_H
