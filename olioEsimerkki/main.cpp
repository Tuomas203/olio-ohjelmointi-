#include <iostream>
#include "pankkitili.h"

using namespace std;




int main()
{
    pankkitili munTili;

   /* cout << "pinkoodi on "
         << munTili.pinkoodi
         << endl; */


    munTili.setSaldo(150);

    cout << "Saldo on "
         << munTili.getSaldo()
         << endl;

    pankkitili toinenTili("5566");

    toinenTili.setSaldo(200);

    cout << "Saldo on "
         << toinenTili.getSaldo()
         << endl;



    return 0;
}
