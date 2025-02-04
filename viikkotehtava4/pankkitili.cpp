#include "pankkitili.h"

Pankkitili::Pankkitili(string) {}



bool Pankkitili::withdraw(double summa)
{
    if (summa<=0||summa>getBalance())
    {
        cout << "Insufficien funds or a negative withdraw amount" << endl;
        return false;
    }
    else
    {
        setBalance(getBalance()-summa);
        cout << "Withdraw successful" << endl;
         return true;
    }


}

double Pankkitili::getBalance()
{
    return saldo;
}

void Pankkitili::setBalance(double newBalance)
{
    saldo = newBalance;

}

bool Pankkitili::deposit(double summa)
{
    if (summa<=0)
    {
        cout << "A negative deposit amount" << endl;
        return false;
    }
    else
    {
        setBalance(getBalance()+summa);
        cout << "Deposit successful" << endl;
        return true;
    }
}


