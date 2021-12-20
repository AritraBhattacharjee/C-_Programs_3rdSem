#include "multilevel_inheritance.h"
#include <iostream>
using namespace std;

int main()
{
    Person p1,*parr;
    Employee e1;
    Teacher t1;

    cout<<"Storing instances of employee and teacher in person type array and displaying"<<endl;
    parr = new Person[2];
    parr[0] = e1;
    parr[1] = t1;

    // parr[0];
    // parr[1];

    return 0;
}