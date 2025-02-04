#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <iostream>

using namespace std;

class Pankkitili
{

public:

    Pankkitili(string o);
    double getBalance();
   virtual bool deposit(double);
   virtual bool withdraw(double);


    void setBalance(double newBalance);

protected:

    string omistaja;
    double saldo = 0;
};


#endif // PANKKITILI_H
