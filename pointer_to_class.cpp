#include<iostream>
using namespace std;

class Num1
{
    public:
    int a;
    void getnum()
    {
        cout<<"Enter a number: ";
        cin>>a;
    }
    void showNum()
    {
        cout<<"The Number from the base class : "<<a<<endl;
    }
};
class  Num2 : public Num1
{
    public:
    int b;
    void getNum2()
    {
        cout<<"Enter another number : ";
        cin>>b;
    }
    void showNum2()
    {
        cout<<"The Number from the derived class : "<<b<<endl;
    }
};
int main()
{
    Num1 n1,*bptr;
    Num2 n2, *dptr;

    bptr = &n1;
    dptr = &n2;
    // accessing member function using objects of the class
    cout<<"Accessing member function using objects"<<endl;
    n1.getnum();
    n1.showNum();
    // Base class pointer cannot access the members of the class derived from it. So,
    //bptr->getNum();
    // bptr -> showNum2() ;  ---> they are invalid 

    cout<<endl<<"Accessing member function using pointer to the base class"<<endl<<endl;
    bptr->getnum();
    bptr->showNum();

    // The derived class pointer can access the members of the inherited base class
    cout<<endl<<"Accessing member function using pointer to the derived class class"<<endl<<endl;
    dptr->getnum();
    dptr->showNum();
    dptr->getNum2();
    dptr->showNum2();
    return 0;
}