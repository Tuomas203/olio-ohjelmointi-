#include "chef.h"

#include <iostream>

using namespace std;

Chef::Chef()
{
    cout << "Chef defaultconstructori ei nimea"
         << endl;

}



Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konsturktori, kokoin nimi "
         << chefName
         << endl;
}

Chef::~Chef()
{
    cout << "Chef destructori"
         << endl;
}

int Chef::makeSalad(int aines)
{
    int salaattiAnnoksia =0;
    cout << "Aineksia "
         << aines
         << endl;
    salaattiAnnoksia = aines/5;
    return salaattiAnnoksia;
}

int Chef::makeSoup(int aines)
{

    int keittoAnnoksia =0;
    cout << "Aineksia "
         << aines
         << endl;
    keittoAnnoksia = aines/3;
    return keittoAnnoksia;


}
