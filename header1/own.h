#include<iostream>
#include<math.h>
using namespace std;

int counter(int n)
{
    int ctr = 0;
    while(n!=0)
    {
        n= n/10;
        ctr++;
    }
    return ctr; 
}
bool armstrong(int n)
{
    int c = counter(n);
    int sum=0,r,num = n;

    while(n!=0)
    {
        r = n%10;
        sum += pow(r,c);
        n = n/10;
    }
    if(sum == num)
        return true;
    else
        return false;
}