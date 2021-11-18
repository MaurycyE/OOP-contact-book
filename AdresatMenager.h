#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZadresatami.h"
#include "UzytkownikMenager.h"

using namespace std;


class AdresatMenager
{
    public:
        //AdresatMenager() {};
        AdresatMenager(string nazwaPlikuZAdresatami): plikZadresatami(nazwaPlikuZAdresatami) {};
        int dodajAdresata();
        void wyswietlWszystkichAdresatow();
        void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
        void ustawIdZalogowanegoUzytkownika(int PobraneIdZalogowanegoUzytkownika);

    private:
        Adresat adresat;
        vector <Adresat> adresaci;
        int idZalogowanegoUzytkownika;
        int idOstatniegoAdresata;
        Adresat podajDaneNowegoAdresata(int idOstatniegoAdresata);
        PlikZadresatami plikZadresatami;
        void wyswietlDaneAdresata(Adresat adresat);

};

#endif // ADRESATMENAGER_H
