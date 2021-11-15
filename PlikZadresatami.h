#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include <fstream>

using namespace std;


class PlikZadresatami
{
    public:
        /** Default constructor */
        PlikZadresatami();
        void dopiszAdresataDoPliku(Adresat adresat);


    private:
        string nazwaPlikuZAdresatami;
        string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
};

#endif // PLIKZADRESATAMI_H
