#include "pankkitili.h"

pankkitili::pankkitili() {
    saldo = 0;
        pinkoodi = "1234";
    tilinumero = "FI80032432";
}

pankkitili::pankkitili(string pk)
{
    this->pinkoodi = pk;
    saldo = 0;
    tilinumero = "FI80032432";
}

int pankkitili::getSaldo() const
{


    return saldo;

}

void pankkitili::setSaldo(int newSaldo)
{
    saldo = saldo + newSaldo;
}

bool pankkitili::kirjaudu(string pk)
{
    if (pinkoodi == pk){
        kirjautunut = true;
    }
}

string pankkitili::getTilinumero() const
{
    return tilinumero;
}





