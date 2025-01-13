#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class pankkitili
{
public:
    pankkitili();
    pankkitili(string pinkoodi);

    int getSaldo() const;
    void setSaldo(int newSaldo);

    bool kirjaudu(string pinkoodi);


    string getTilinumero() const;

private:
    int saldo;
    string tilinumero;
    string pinkoodi;
    bool kirjautunut = false;

};

#endif // PANKKITILI_H
