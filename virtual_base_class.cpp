/*
3. Write a C++ program to show the method overridden ambiguity in inheritance, how to solve it by using :: operator and also show how we can solve the ambiguity by using virtual base class.
*/

#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"I am from Class A"<<endl;
    }
};

class B: public A
{
    public:
    void display()
    {
        cout<<"I am from class B"<<endl;
    }
};
class C: virtual public A
{
    public:
    void display()
    {
        cout<<"I am from class C";
    }
};
int main()
{
        B b1;
        // calling the display funciton from class A
        // Ambiguity resolution using scope resolution :: operator
        b1.display();// overwrites the display function of the class A
        b1.A::display();

        //Calling the function from the class B
        // Ambiguity resolution using scope resolution operator
        b1.B::display();

        // ambiguithy resolution using virtual base class
        C c1;
        c1.display();


    return 0;
}