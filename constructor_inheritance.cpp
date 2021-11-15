/*
Write a C++ program to design three classes with three respective parameterized constructor definitions. The third class will inherit both the first and second classes (multiple inheritance). Now, the third derived class constructor receives the entire list of values as its arguments and passes them on to the base constructors in the order in which they are declared in the derived class.
*/
#include<iostream>
using namespace std;

class A
{
    int x;
    public:
    A(int i)
    {
        x=i;
        cout<<"Call from class A."<<endl;
    }
    void show_A()
    {
        cout<<"The value of X is : "<<x<<endl;
    }
};
class B
{
    float y;
    public:

    B(float j)
    {
        y=j;
        cout<<"Call from class B."<<endl;
    }
    void show_B()
    {
        cout<<"The Value of y is : "<<y<<endl;
    }

};

class C : public A, public B // multiple inheritance
{
    int w,z;
    public :
    C(int m, float n, int p, int q) : A(m), B(n)
    {
        w=p;
        z = q;
        cout<<"Call from class C"<<endl;
    }
    void show_C()
    {
        cout<<"The value of w and z are : "<<w<<"  "<<z<<endl;
    }
};

int main()
{
    C c1(5, 6.9,10, 54);
    cout<<endl;
    c1.show_A();
    c1.show_B();
    c1.show_C();
    return 0;
}
