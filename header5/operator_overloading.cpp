#include<iostream>
#include "operatorss.h"
using namespace std;

int main()
{

    complex c1(6,6),c2(6,6),c3(5,10),c4(0,7);
    /*
    if(c1!=c2)
    {
        cout<<"The complex numbers are not same. "<<endl;
    }
    else
    {
        cout<<"The complex numbers are same";
    }
    cout<<"Overloading of == Operator"<<endl;
    
    if(c3==c4)
    {
        cout<<"The complex numbers are same. "<<endl;
    }
    else
    {
        cout<<"The complex numbers are not same";
    }*/
    bool res1 = c1!=c2;
    bool res2 = c1==c2;
    if(res1 == true)
    {
        cout<<"Complex numbers are not same. "<<endl;
    }
    else //if(res2 == true)
    {
        cout<<"Complex numbers are same."<<endl;
    }

    return 0;
}