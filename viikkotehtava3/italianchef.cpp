#include "italianchef.h"

using namespace std;

ItalianChef::ItalianChef()
{
    cout << "ItalianChef defaultkonstruktori ei nimea"
         << endl;
}

ItalianChef::ItalianChef(string name)
    : Chef(name)
{

    cout << "ItalianChef konstruktori"
         << ", kokin nimi "
         << name
         << endl;

}

ItalianChef::~ItalianChef()
{


    cout << "ItalianChef destruktori"
         << endl;


}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    if ((password.compare(0, 5, pw)) == 0)
    {

        cout << "Password is matching" << endl;
        flour = f;
        water = w;
        makePizza();

    }

    else
    {
        cout << "Pass word is not a match" << endl;
        return false;
    }
}

int ItalianChef::makePizza()
{
    if(flour >= 5 && water >= 5)
    {
        cout << "Lets make some pizza" << endl;

        int i =0;

        while(flour >= 5 && water >= 5)
        {
        flour = flour - 5;
        water = water - 5;
        i++;
        }
        cout << "I can make: " << i << " pizza"<< endl;

    }


    else
        {
            cout << "not enough ingredients " << endl;
        }
}
