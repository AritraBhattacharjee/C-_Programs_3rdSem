#include<iostream>
#include "own.h"
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(armstrong(n) == true)
        cout<<"It is an Armstrong Number";
    else
        cout<<"It is not an arnstrong number";

    return 0;
}