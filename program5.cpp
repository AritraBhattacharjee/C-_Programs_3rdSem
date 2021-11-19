/*
5. Define a class with appropriate data members and member functions which opens an input and output file, checks each one for being open, and then reads name, age, salary of a person from the input file and stores the information in an object, increases the salary by a bonus of 10% and then writes the person object to the output file. It continues until the input stream is no longer needed.
*/
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;

class Emp
{
    char name[20];
    int age;
    float salary;
    ofstream f1;
    ifstream i1;

    public:
        Emp()
        {
            i1.open("input");
        }
        void details()
        {
            i1>>name;
            i1>>age;
            i1>>salary;
            i1.close();

        }
        void display_details()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Salary : "<<salary<<endl;
        }
        void bonus()
        {
            salary = salary + (10*salary/100);
            // cout<<"Updated salary is : "<<salary<<endl;
        }
        void write_to_file()
        {
            f1.open("output");
            f1<<name<<endl;
            f1<<age<<endl;
            f1<<salary<<endl;
            f1.close();
        }
        
};
int main()
{
    Emp e1;
    e1.details();
    cout<<"Contents of the input file"<<endl;
    e1.display_details();

    e1.bonus();

    e1.write_to_file();

    cout<<"Contents of the output file."<<endl;
    e1.display_details();

    return 0;
}