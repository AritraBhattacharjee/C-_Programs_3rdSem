#include<iostream>
using namespace std;

int main()
{
    float dailyAllowance,incomeTax,gs,bs;
    cout<<"Enter the basic salary and gross salary in Rs.: ";
    cin>>bs>>gs;

    dailyAllowance= 52*bs/100;
    
    incomeTax= 30*gs/100;

    cout<<"The Daily Allowance is Rs."<<dailyAllowance<<" and the income tax is Rs."<<incomeTax<<endl;
}
