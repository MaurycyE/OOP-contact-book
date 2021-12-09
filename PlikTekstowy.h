#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H
#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy
{
    public:

        PlikTekstowy(string nazwaPliku): NAZWA_PLIKU(nazwaPliku) {
        };
        bool czyPlikJestPusty(fstream &plikTekstowy);
        string pobierzNazwePliku();

    private:
        const string NAZWA_PLIKU;


};

#endif // PLIKTEKSTOWY_H
