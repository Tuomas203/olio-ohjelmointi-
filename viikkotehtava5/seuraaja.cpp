#include "seuraaja.h"
#include <iostream>


Seuraaja::Seuraaja(string n)
{
    nimi=n;
    cout << "Luodaan seuraaja " << nimi << endl;
}

string Seuraaja::getNimi()
{

    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout << "Sai viestin " << viesti << endl;
}
