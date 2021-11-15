#include <iostream>
#include "KsiazkaAdresowa.h"
#include "AdresatMenager.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    //zmianaHaslaZalogowanegoUzytkownika(5);
    AdresatMenager adresat;
    int idOstatniegoAdresata=adresat.dodajAdresata(0);
    return 0;
}
