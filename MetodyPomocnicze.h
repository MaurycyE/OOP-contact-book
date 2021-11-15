#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H
#include <iostream>
#include <fstream>

using namespace std;

class MetodyPomocnicze {
public:
    /** Default constructor */
    MetodyPomocnicze();
    /** Default destructor */
    ~MetodyPomocnicze();
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static bool czyPlikJestPusty(fstream &plikTekstowy);
    //protected:


};

#endif // METODYPOMOCNICZE_H
