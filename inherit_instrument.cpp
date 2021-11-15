/*
6. Create a class called Musicians to contain three methods string ( ), wind ( ) and perc ( ). Each of these methods should initialize a string array to contain the following instruments
–  veena, guitar, sitar, sarod and mandolin under string ( )
–  flute, clarinet saxophone, nadhaswaram and piccolo under wind ( )
–  tabla, mridangam, bangos, drums and tambour under perc ( )
It should also display the contents of the arrays that are initialized. Create a derived class called TypeIns to contain a method called get ( ) and show ( ). The get () method must display a  means as follows,
Type of instruments to be displayed
a.    String instruments
b.    Wind instruments
c.    Percussion instruments
The show ( ) method should display the relevant detail according to our choice. The base class variables must be accessible only to its derived classes.

*/
#include<iostream>
#include<string>
using namespace std;

class Musician
{
    // string arr1[5],arr2[4],arr3[5];
    public:
    void strings()
    {
        string arr1[5]={"Veena","Guitar","Sitar","Sarod","Mandol"};
        for (int i = 0; i < 4; i++)
        {
            cout<<arr1[i]<<"  ";
        }
        cout<<endl;
        
        
    }
    void wind()
    {
        string arr2[4] = {"flute","carinet saxophone","nadhaswaram","piccolo"};
        for (int i = 0; i < 4; i++)
        {
            cout<<arr2[i]<<"  ";
        }
        cout<<endl;

    }
    void perc()
    {
        string arr3[5] = {"Tabla","Mridangam","Bangos","Drums","Tambour"};
        for (int i = 0; i < 4; i++)
        {
            cout<<arr3[i]<<"  ";
        }
        cout<<endl;
    }

};

class Type_Ins : private Musician
{
    int choice;
    public:
    void get()
    {
        cout<<" 1. String instruments \n 2. Wind instruments \n 3. Percussion instruments \n 4. Exit"<<endl;
        cin>>choice;
    }

    void show()
    {
        while(choice != 4)
        {
            switch (choice)
            {
            case 1:
                strings();
                break;
            
            case 2:
                wind();
                break;

            case 3:
                perc();
                break;
            
            default:
                cout<<"Wrong choice. Try again...";
                break;
            }
            cout<<" 1. String instruments \n 2. Wind instruments \n 3. Percussion instruments \n 4. Exit"<<endl;
            cin>>choice;
        }
    }
};
int main()
{
    Type_Ins tp1;
    tp1.get();
    tp1.show();
    return 0;
}