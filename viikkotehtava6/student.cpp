#include "student.h"





Student::Student(string n, int a)
{
    Name = n;
    Age = a;
}

void Student::setAge(int newAge)
{
    Age= newAge;
}

void Student::setName(string newName )
{
    Name = newName;
}

string Student::getName()
{
    return Name;
}


int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << " Student " << getName() << " Age " << getAge() << endl;
}

