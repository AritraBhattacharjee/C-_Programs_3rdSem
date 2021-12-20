#include<iostream>
using namespace std;
class person
{
    public:
    void show()
    {
        cout<<"I am the show method of class 'Person'"<<endl;
    }
};
class employee
{
    public:
    void show()
    {
        cout<<"I am the show method of class 'employee'"<<endl;
    }
};

class teacher:public employee,public person
{
    public:
    void show()
    {
        cout<<"I am the show method of class 'teacher'"<<endl;
    }
};
