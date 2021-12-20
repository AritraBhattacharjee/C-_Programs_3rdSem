#include<iostream>
#include "own1.h"

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    sum obj1;
    obj1.add(a,b);

    substract obj2;
    obj2.difference(a,b);

    multiply obj3;
    obj3.product(a,b);


    return 0;
}