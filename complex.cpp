/*2. Write base class that ask the user to enter a complex number and derived class adds the complex number of its own with the base. Finally make third class that is friend of derived and calculate the difference of base complex number and its own complex number.*/


#include<iostream>
using namespace std;

class complex1{
    protected:
        int a1,b1;
    public:
        void getnum()
        {
            cout<<"Enter a complex number in the form a+ib (a,b) : ";
            cin>>a1>>b1;
        }
};

class complex2: private complex1
{
    protected:
        int a2,b2,c,d;
    public:
        void gets()
        {
            getnum();
        }
        void getnum2()
        {
            cout<<"Enter 2nd complex number in the form a+ib (a,b) : ";
            cin>>a2>>b2;
        }
        void addition()
        {
            c = a1+a2;
            d = b1 + b2;
        }
        void showresult()
        {
            cout<<"The addition of the two complex numbers are : "<<c<<" + i "<<d<<endl;
        }
};

class complex3 : private complex2
{
    public:
        int a3,b3,m,n;
        void gets1()
        {
            getnum2();
        }
        void getnum3()
        {
            
            cout<<"Enter 3nd complex number in the form a+ib (a,b) : ";
            cin>>a3>>b3;
        }
        void substraction()
        {
            m = a3-a2;
            n = b3 - b2;
        }
        void showresult2()
        {
            cout<<"The subsstraction of the two complex numbers are : "<<m<<" + i "<<n<<endl;
        }
};
int main()
{
    complex2 c2;
    c2.gets();
    c2.getnum2();
    c2.addition();
    c2.showresult();
    
    complex3 c3;
    c3.gets1();
    c3.getnum3();
    c3.substraction();
    c3.showresult2();

    return 0;   
}
