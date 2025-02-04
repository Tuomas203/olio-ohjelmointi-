#include "luottotili.h"

Luottotili::Luottotili(string o, double lr) : Pankkitili(o)
{
    luottoRaja= lr;
    cout << "luottoraja: " <<luottoRaja << endl;
}



bool Luottotili::withdraw(double summa)
{
    if (summa<=0||getBalance()-summa>luottoRaja)
    {
        cout << "Insufficien funds or a negative withdraw amount" << endl;
        return false;
    }
    else
    {
        setBalance(getBalance()-summa);
        cout << "Withdraw successful" << endl;
        cout<< "Credit left over: " << luottoRaja-summa << endl;
        return true;
    }
}

bool Luottotili::deposit(double summa)
    {
        if (summa<=0)
        {
            cout << "A negative deposit amount" << endl;
            return false;
        }
        else if(getBalance() + summa > 0)
        {
            cout << "You can't deposit more then the amount of debt" << endl;
            return false;
        }
        else
        {
            setBalance(getBalance()+summa);
            cout << "Deposit successful"  << endl;
            cout << "Credit to be paid back: " << -1* getBalance() << endl;


            return true;
        }
    }
