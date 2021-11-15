#include<iostream>

using namespace std;

class A
{
    public: 
    int a = 10,b = 15,c = 20;

    private:
    int e = 12,f =16,g = 22;

    protected:
    int m=25,n= 35,o = 45;
    
 
};

class derive_A: public A
{
    
};

int main()
{
    derive_A d1;
    cout<<d1.a<< "  "<<d1.b<<"  "<<d1.c<<endl;
    // e,f,g (private member of base class, inherited as public) are not inherited
    //m,n,o (protected member of base class inherited as public ) are protected.

    return 0;
}