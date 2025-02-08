#include "notifikaattori.h"

Notifikaattori::Notifikaattori()

{
    cout << "luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    uusiSeur->next=seuraajat;

    seuraajat = uusiSeur;
}

void Notifikaattori::poista(Seuraaja *poisSeur)
{

    Seuraaja *alku = seuraajat;

    while (alku != nullptr)
    {
    cout<< "Poistettiin " << poisSeur->getNimi() <<endl;
        if((alku->next=poisSeur))
        {
            alku->next = poisSeur->next;
            cout <<"we good"<< endl;
            return;
        }
        else
        {
          alku = alku->next;

        }

    }
}

void Notifikaattori::tulosta()
{

    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        cout << "Seuraaja  " << alku->getNimi() << endl;
        alku = alku->next;
    }
}

void Notifikaattori::postita(string v)
{

    cout << v << endl;
}









