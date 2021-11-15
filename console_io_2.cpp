/*
2.Write a C++ program to show the use of formatted I/O operations using ios class functions width() and precision().
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the starting value : ";
    cin>>a;
    cout<<"Enter the ending value : ";
    cin>>b;
    cout<<endl<<"Calculating cube root upto 4 decimal places"<<endl;

    cout.precision(5);
    cout.width(10);
    cout<<"Number";
    cout.width(27);
    cout<<"Cube root of the number"<<endl;
    
    for (int i = a; i <=b; i++)
    {
        cout.width(10);
        cout<<i;
        cout.width(15);
        cout<<cbrt(i)<<endl;
    } 
    return 0;
}
