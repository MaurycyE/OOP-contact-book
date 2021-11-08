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
    PlikZuzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI): nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI){};
    /** Default destructor */
    ~PlikZuzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    //protected:
    vector<Uzytkownik> wczytajUzytkownikowZPliku();


private:
    const string nazwaPlikuZUzytkownikami;
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    //fstream plikTekstowy;
    //vector <Uzytkownik> uzytkownicy;

    bool czyPlikJestPusty();
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

};

#endif // PLIKZUZYTKOWNIKAMI_H
