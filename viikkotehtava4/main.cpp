#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;


int main()
{
  /*  Pankkitili pa("Gordon");

    pa.deposit(200);
    pa.withdraw(50);
   cout << pa.getBalance() << endl;

    Luottotili lt("Gordon", 1000);

   lt.withdraw(200);
    lt.deposit(100);*/


    Asiakas A("Aaa", 1000);
    Asiakas B("Bee", 1000);
    Asiakas C("Cee", 1000);

    A.talletus(1000);
    A.luotonNosto(120);
    A.showSaldo();

    A.tiliSiirto(358,B);
    A.showSaldo();

    B.tiliSiirto(125,C);
    B.showSaldo();
    C.showSaldo();






    return 0;
}



