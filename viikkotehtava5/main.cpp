#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"
using namespace std;

int main()
{
     Notifikaattori *N = new Notifikaattori();

    Seuraaja *A = new Seuraaja("Aapeli");
    Seuraaja *B = new Seuraaja("Beepeli");
    Seuraaja *C = new Seuraaja("Ceepeli");


    cout << endl;

    N->lisaa(A);

    N->lisaa(B);

    N->lisaa(C);





    N->poista(B);








/*
    Seuraaja *alku = A;
    while (alku != nullptr)
    {
        cout << alku->getNimi() << endl;
        alku = alku->next;
    }*/

   /*
    A->next =B;
    B->next =C;

    Seuraaja *alku = A;
    while(alku != nullptr)
    {
        cout << "Listassa nyt: " << alku->getNimi() << endl;
        alku -> paivitys("kaikki ok");
        alku = alku->next;
        if(alku != nullptr)
        {
        cout << "Listassa seuraava: " << alku->getNimi() << endl;
        }
        else
        {
            cout << "Lista loppui" << endl;
        }
    }

    cout << endl;
*/
    delete A;
    delete B;
    delete C;

    return 0;
}
