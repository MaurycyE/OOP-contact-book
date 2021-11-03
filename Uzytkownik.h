#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H
#include <iostream>

using namespace std;

class Uzytkownik
{

    int id;
    string login;
    string haslo;


    public:
        /** Default constructor */
        Uzytkownik();
        /** Default destructor */
        ~Uzytkownik();
        void ustawId(int noweId);
        void ustawLogin(string nowyLogin);
        void ustawHaslo(string noweHaslo);

        int pobierzId();
        string pobierzLogin();
        string pobierzHaslo();

    //protected:

    //private:
};

#endif // UZYTKOWNIK_H