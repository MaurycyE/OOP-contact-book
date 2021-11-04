#include "UzytkownikMenager.h"
#include <iostream>

using namespace std;

UzytkownikMenager::UzytkownikMenager() {
    //ctor
}

UzytkownikMenager::~UzytkownikMenager() {
    //dtor
}

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

