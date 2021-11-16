#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZadresatami.h"

using namespace std;


class AdresatMenager
{
    public:
        /** Default constructor */
        AdresatMenager();
        int dodajAdresata( int idOstatniegoAdresata);
        void wyswietlWszystkichAdresatow();

    private:
        Adresat adresat;
        vector <Adresat> adresaci;
        int idZalogowanegoUzytkownika;
        Adresat podajDaneNowegoAdresata(int idOstatniegoAdresata);
        PlikZadresatami plikZadresatami;
        void wyswietlDaneAdresata(Adresat adresat);
};

#endif // ADRESATMENAGER_H
