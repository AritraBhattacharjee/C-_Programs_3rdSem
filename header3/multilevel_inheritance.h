#include<iostream>
using namespace std;

class Person
{
    public:
    Person()
    {
        cout<<"I Am a person"<<endl;
    }
};
class Employee:public Person
{
    public:
    Employee()
    {
        cout<<"I am An Employee"<<endl;
    }
};
class Teacher:public Employee
{
    public:
    Teacher()
    {
        cout<<"I am a teacher"<<endl;
    }
};