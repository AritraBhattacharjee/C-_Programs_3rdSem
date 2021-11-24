/*Write a C++ program to show how class objects can be written to and read from the disk files. The length of the object is obtained using the sizeof operator. This length represents the sum total of lengths of all data members of the object.*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Emp
{
    char name[20];
    int age;
    long long phone_number;
    
    ofstream f1;
    ifstream i1;

    public:
        Emp()
        {
            i1.open("input1");
        }
        void details()
        {
            i1>>name;
            i1>>age;
            i1>>phone_number;
            i1.close();

        }
        void display_details()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"phone_number : "<<phone_number<<endl;
        }
        void write_to_file()
        {
            f1.open("output1");
            f1<<name<<endl;
            f1<<age<<endl;
            f1<<phone_number<<endl;
            f1.close();
        }
        
};
int main()
{
    Emp e1;
    e1.details();
    cout<<"Contents of the input file"<<endl;
    e1.display_details();
    e1.write_to_file();
    cout<<"Contents of the output file."<<endl;
    e1.display_details();

    return 0;
}






