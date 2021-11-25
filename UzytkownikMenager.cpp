#include "UzytkownikMenager.h"

using namespace std;


void UzytkownikMenager::rejestracjaUzytkownika () {

    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZuzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");

}

Uzytkownik UzytkownikMenager::podajDaneNowegoUzytkownika() {

    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    string login;
    do {
        cout<< "Podaj login: ";
        cin>>login;
        uzytkownik.ustawLogin(login);

    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    string haslo;
    cout << "Podaj haslo: ";
    cin>>haslo;
    uzytkownik.ustawHaslo(haslo);


    return uzytkownik;
}

int UzytkownikMenager::pobierzIdNowegoUzytkownika() {

    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool  UzytkownikMenager::czyIstniejeLogin(string login) {

    for (int i=0; i<uzytkownicy.size(); i++) {

        if (uzytkownicy[i].pobierzLogin()==login) {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }

    }
    return false;
}

void UzytkownikMenager::wypiszWszystkichUzytkownikow() {

    for (int i=0; i<uzytkownicy.size(); i++) {

        cout<<uzytkownicy[i].pobierzId()<<endl;
        cout<<uzytkownicy[i].pobierzLogin()<<endl;
        cout<<uzytkownicy[i].pobierzHaslo()<<endl;

    }

}

int UzytkownikMenager::logowanieUzytkownika() {

    string login = "", haslo = "";

    cout << "Podaj login: ";
    login = MetodyPomocnicze::wczytajLinie();

    vector <Uzytkownik>::iterator itr = uzytkownicy.begin();
    while (itr != uzytkownicy.end()) {
        if (itr -> Uzytkownik::pobierzLogin() == login) {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--) {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = MetodyPomocnicze::wczytajLinie();

                if (itr -> Uzytkownik::pobierzHaslo() == haslo) {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    idZalogowanegoUzytkownika=itr -> Uzytkownik::pobierzId();
                    return idZalogowanegoUzytkownika;

                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
        itr++;
    }

    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return 0;
}

void UzytkownikMenager::zmianaHaslaZalogowanegoUzytkownika() {

    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = MetodyPomocnicze::wczytajLinie();

    for (vector <Uzytkownik>::iterator itr = uzytkownicy.begin(); itr != uzytkownicy.end(); itr++) {
        if (itr -> Uzytkownik::pobierzId() == idZalogowanegoUzytkownika) {
            itr -> Uzytkownik::ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }
    plikZuzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}


int UzytkownikMenager::pobierzIdZalogowanegoUzytkownika() {

    return idZalogowanegoUzytkownika;

}

void UzytkownikMenager::wylogujUzytkownika () {

    idZalogowanegoUzytkownika=0;

}

bool UzytkownikMenager::czyUzytkownikJestZalogowany() {

    if (idZalogowanegoUzytkownika>0)
        return true;
    else
        return false;

}
