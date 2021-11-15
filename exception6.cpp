/*Write a C++ program to rethrowing the exception caught without processing it and also show how to catch(…..) all exceptions*/
#include<iostream>
using namespace std;

void check(double x)
{
    try
    {
        if(x == 1) 
            throw int(x);
        if(x== 2.0)
            throw x;
    }
    catch(double)
    {
        cout<<"Caught exception double from function"<<endl;
        throw;
    }
    catch(...)
    {
        cout<<"caught an exception "<<endl;
    }
    
}
int main()
{
    int a,b,c;
    cout<<"Enter a number(1 for integer, 2.0 for double) : "<<endl;
    cin>>a;

    try
    {
        check(a);
    }
    catch(double)
    {
        cout<<"Caught exception doule from main"<<endl;
    }
    
    return 0;
}