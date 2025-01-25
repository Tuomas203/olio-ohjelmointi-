#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
  /*  Chef c_olio("Gordon");

    int salaattiAnnoksia = c_olio.makeSalad(10);
    cout << "Salaatteja tehtiin "
         << salaattiAnnoksia
         << endl;

    int keittoAnnoksia = c_olio.makeSoup(12);
    cout << "Keittoja tehtiin "
         << keittoAnnoksia
         << endl;*/


  ItalianChef i_olio("Mario");

  i_olio.askSecret("pizza", 20, 20);



    return 0;
}
