#include "MetodyPomocnicze.h"
#include <iostream>
#include <sstream>

using namespace std;

MetodyPomocnicze::MetodyPomocnicze() {
    //ctor
}

MetodyPomocnicze::~MetodyPomocnicze() {
    //dtor
}

string MetodyPomocnicze::konwerjsaIntNaString(int liczba) {
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

string MetodyPomocnicze::wczytajLinie() {
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}
