/*
1.	Write a C++ program to throw an exception (division by zero) using a single try block and handle the same using a single catch block.
*/
#include<iostream>
using namespace std;

int main()
{
    int a,b,x;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    x = a-b;
    try
    {
        if(x!=0)
            cout<<"Result(a/x): "<<x<<endl;
        else
            throw(x);
    }
    catch(int x)
    {
        cout<<"Exception caught. x = "<<x<<endl;
    }
    cout<<"Operation ended";
    return 0;
}