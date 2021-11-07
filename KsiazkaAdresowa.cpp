#include "KsiazkaAdresowa.h"
#include <iostream>
#include <windows.h>
#include <fstream>
#include <sstream>

using namespace std;

KsiazkaAdresowa::KsiazkaAdresowa() {

uzytkownikMenager.wczytajUzytkownikowZPliku();


}



void KsiazkaAdresowa::rejestracjaUzytkownika() {

uzytkownikMenager.rejestracjaUzytkownika();

}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {

uzytkownikMenager.wypiszWszystkichUzytkownikow();

}
