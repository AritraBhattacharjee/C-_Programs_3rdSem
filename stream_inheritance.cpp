#include<iostream>
using namespace std;

class student
{
    public:
    student()
    {
        cout<<"I am a student";
    }
};

class Arts : private student
{
    public:
    Arts()
    {
        cout<<endl<<"I am from arts";
    }
};

class engineering : public student
{
    public:
    engineering()
    {
        cout<<endl<<"I am from engineering";
    }

};
class medical : public student
{
    public:
    medical()
    {
        cout<<endl<<"I am from medical";
    }

};

class mechanical : public engineering
{
    public:
    mechanical()
    {
        cout<<endl<<"I am from mechinal engineering";
    }

};

class computer_science : public engineering
{   public:
    computer_science()
    {
        cout<<endl<<" I am from Computer Science ";
    }

};

class civil : public engineering
{
    public:
    civil()
    {
        cout<<endl<<"I am from civil engineering";
    }
};


int main()
{
    cout<<endl<<"Inheritance from students to arts : "<<endl;
    Arts a1;
    cout<<endl<<"Inheritance from students to engineering : "<<endl;
    engineering e1;
    cout<<endl<<"Inheritance from students to medical : "<<endl;
    medical m1;
    cout<<endl<<"Inheritance from students to engineering to mechanical : "<<endl;
    mechanical me1;
    cout<<endl<<"Inheritance from students to engineering to mechanical : "<<endl;
    computer_science cs1;
    cout<<endl<<"Inheritance from students to engineering to computer science : "<<endl;
    civil c1;
    cout<<endl<<"Inheritance from students to engineering to civil : "<<endl;

    return 0;
}