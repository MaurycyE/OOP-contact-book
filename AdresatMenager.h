#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H
#include <iostream>
#include <vector>
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

    private:
        Adresat adresat;
        vector <Adresat> adresaci;
        int idZalogowanegoUzytkownika;
        Adresat podajDaneNowegoAdresata(int idOstatniegoAdresata);
        PlikZadresatami plikZadresatami;
};

#endif // ADRESATMENAGER_H
