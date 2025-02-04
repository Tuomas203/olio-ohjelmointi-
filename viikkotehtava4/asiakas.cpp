#include "asiakas.h"

Asiakas::Asiakas(string n, double lr):kayttotili(n), luottotili(n, lr)
{
    nimi=n;
    cout << "nimi " << nimi << endl;
}

bool Asiakas::talletus(double summa)
{
    bool onnistuiko = kayttotili.deposit(summa);
    if (onnistuiko == false)
    {
        cout << "Talletus meni pieleen" << endl;
    }
    return onnistuiko;
}

bool Asiakas::nosto(double summa)
{
    bool onnistuiko = kayttotili.withdraw(summa);
    if (onnistuiko == false)
    {
        cout << "Nosto meni pieleen" << endl;
    }
    return onnistuiko;
}

bool Asiakas::luotonMaksu(double summa)
{
    bool onnistuiko = luottotili.deposit(summa);
    if (onnistuiko == false)
    {
        cout << "Luoton maksu meni pieleen" << endl;
    }
    return onnistuiko;
}

bool Asiakas::luotonNosto(double summa)
{
    bool onnistuiko = luottotili.withdraw(summa);
    if (onnistuiko == false)
    {
        cout << "Luoton nosto meni pieleen" << endl;
    }
    return onnistuiko;
}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja)
{
    bool onnistuiko = nosto(summa);
    if (onnistuiko == true){
    saaja.talletus(summa);
    }
    return onnistuiko;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout <<  kayttotili.getBalance() << endl;

}



