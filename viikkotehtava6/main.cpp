
#include <iostream>
#include <vector>
#include "student.h"
#include <algorithm>

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    Student a("Aaa",16);
    Student b("Bee",67);
    Student c("Cee",28);
    Student d("Dee",33);
    Student e("Eee",45);
    Student f("Fff",20);


    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);
    studentList.push_back(e);
    studentList.push_back(f);



    a.getAge();


    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.

            break;

        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "Names of the students: ";
            for (Student &s: studentList)
            {
                cout << s.getName() << " ";
            }
            cout << endl;


            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(),[](Student &eka, Student &toka)
                 {
                     return eka.getName() < toka.getName();
                 }
                 );

            cout << endl << "Sorterted by name" << endl;
            for(Student &s: studentList) {
                cout << s.getName() << ": " << s.getAge() << endl;
            }



            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.rbegin(), studentList.rend(),[](Student &eka, Student &toka)
                 {
                     return eka.getAge() < toka.getAge();
                 }
                 );

            cout << endl << "Sorterted by Age" << endl;
            for(Student &s: studentList) {
                cout << s.getName() << ": " << s.getAge() << endl;
            }



            break;

        case 4:
        { // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

            vector<Student>::iterator it = studentList.begin();

            cout << "Anna etsittavan nimi" << endl;
            string etsittavanimi;
            cin >> etsittavanimi;
            it = find_if(studentList.begin(), studentList.end(),
                         [etsittavanimi](Student &s) {return s.getName() == etsittavanimi;});
            if (it != studentList.end() )
            {
                it ->printStudentInfo();
            }
            else
            {
                cout << "Not found\n";
            }

            break;}

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }

    while(selection < 5);
    return 0;
}



