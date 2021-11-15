/*
3.	Write a C++ program to show the use of formatted I/O operations using filling and padding operations such as fill(), setf().
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
    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield);
    
    cout.width(10);
    cout<<"Number";

    cout.setf(ios::right , ios:: adjustfield);
    cout.width(25);
    cout<<"Cube root of the number"<<endl;
    
    cout.fill('.');
    cout.precision(5);
    

    for (int i = a; i <=b; i++)
    {
        cout.setf(ios::showpos);
        cout.width(5);
        cout<<i;

        
        cout.setf(ios::right,ios::adjustfield);
        cout.width(15);
        cout<<cbrt(i)<<endl;
    }
    
    return 0;
}