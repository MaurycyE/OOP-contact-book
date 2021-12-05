#include "KsiazkaAdresowa.h"
#include <iostream>
#include <windows.h>
#include <fstream>
#include <sstream>

using namespace std;


void KsiazkaAdresowa::rejestracjaUzytkownika() {

    uzytkownikMenager.rejestracjaUzytkownika();

}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {

    uzytkownikMenager.wypiszWszystkichUzytkownikow();

}

int KsiazkaAdresowa::logowanieUzytkownika() {

    uzytkownikMenager.logowanieUzytkownika();
    if (uzytkownikMenager.czyUzytkownikJestZalogowany()) {

        adresatMeneger = new AdresatMenager (NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenager.pobierzIdZalogowanegoUzytkownika());
    }

}

void KsiazkaAdresowa::wylogujUzytkownika() {

    uzytkownikMenager.wylogujUzytkownika();
    delete adresatMeneger;
    adresatMeneger = NULL;
}


void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {

    adresatMeneger->wyswietlWszystkichAdresatow();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego() {
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {

    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();

}

void KsiazkaAdresowa::dodajAdresata() {

    if (uzytkownikMenager.czyUzytkownikJestZalogowany()) {
        adresatMeneger->dodajAdresata();
    }

}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {

    return uzytkownikMenager.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu() {

adresatMeneger->wyszukajAdresatowPoImieniu();

}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku() {

adresatMeneger->wyszukajAdresatowPoNazwisku();

}

void KsiazkaAdresowa::podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata() {

adresatMeneger->podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata();

}
