#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include <fstream>
#include <vector>

using namespace std;


class PlikZadresatami
{
    public:
        /** Default constructor */
        PlikZadresatami();
        void dopiszAdresataDoPliku(Adresat adresat);
        int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);


    private:
        Adresat adresat;
        string nazwaPlikuZAdresatami;
        string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
        Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
        int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
        int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
        string pobierzLiczbe(string tekst, int pozycjaZnaku);
};

#endif // PLIKZADRESATAMI_H
