#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int maxnumber);
int main()
{
    int maxnumber;
    cout << "Maarita korkein luku" << endl;
    cin >> maxnumber;

    game(maxnumber);


    return 0;
}




int game(int maxnumber)
{

    srand(time(NULL));
    int saatuluku = rand() %maxnumber;
    int arvaukset = 1;


    int arvaus=0;

    while(saatuluku != arvaus){
        cout << "arvauksesi"<< endl;
        cout << saatuluku << endl;
        cin >> arvaus;
        cout << arvaukset << endl;

        if(saatuluku == arvaus){
            cout << "oikein" << endl;
        }
        else if (saatuluku < arvaus){
            cout << "arvaus liian suuri" << endl;
        }
        else if(saatuluku > arvaus){
            cout << "arvaus on liian pieni" << endl;
        }
        arvaukset ++;
    }


    return arvaukset;
}
