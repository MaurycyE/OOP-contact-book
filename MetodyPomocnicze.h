#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H
#include <iostream>
#include <fstream>

using namespace std;

class MetodyPomocnicze {

public:

    MetodyPomocnicze();
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static int konwersjaStringNaInt(string liczba);
    static char wczytajZnak();
    static int wczytajLiczbeCalkowita();

};

#endif // METODYPOMOCNICZE_H
