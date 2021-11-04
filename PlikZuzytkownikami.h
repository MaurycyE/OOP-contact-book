#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZuzytkownikami {
public:
    /** Default constructor */
    PlikZuzytkownikami();
    /** Default destructor */
    ~PlikZuzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    //protected:

private:
    string nazwaPlikuZUzytkownikami;
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    fstream plikTekstowy;

    bool czyPlikJestPusty();

};

#endif // PLIKZUZYTKOWNIKAMI_H
