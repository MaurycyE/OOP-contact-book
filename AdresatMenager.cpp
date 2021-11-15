#include "AdresatMenager.h"
//#include <iostream>

using namespace std;

AdresatMenager::AdresatMenager() {
    //ctor
}

int AdresatMenager::dodajAdresata(int idOstatniegoAdresata) {
   // Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = AdresatMenager::podajDaneNowegoAdresata(idOstatniegoAdresata);

    adresaci.push_back(adresat);
    plikZadresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatMenager::podajDaneNowegoAdresata(int idOstatniegoAdresata) {
    //Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
    adresat.ustawImie (MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}
