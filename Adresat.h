#ifndef ADRESAT_H
#define ADRESAT_H
#include <iostream>


using namespace std;

class Adresat
{
    public:
        /** Default constructor */
        Adresat();
        int pobierzId();
        int pobierzIdUzytkownika();
        string pobierzImie();
        string pobierzNazwisko();
        string pobierzNumerTelefonu();
        string pobierzEmail();
        string pobierzAdres();
        void ustawId(int noweId);
        void ustawIdUzytkownika(int noweIdUzytkownika);
        void ustawImie(string noweImie);
        void ustawNazwisko(string noweNazwisko);
        void ustawNumerTelefonu(string nowyNumerTelefonu);
        void ustawEmail (string nowyEmail);
        void ustawAdres(string nowyAdres);



    //protected:

    private:
        int id;
        int idUzytkownika;
        string imie;
        string nazwisko;
        string numerTelefonu;
        string email;
        string adres;



};

#endif // ADRESAT_H
