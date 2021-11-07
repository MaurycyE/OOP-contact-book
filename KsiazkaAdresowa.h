#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "UzytkownikMenager.h"

using namespace std;

class KsiazkaAdresowa {

    UzytkownikMenager uzytkownikMenager;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    KsiazkaAdresowa();

};

#endif // KSIAZKAADRESOWA_H
