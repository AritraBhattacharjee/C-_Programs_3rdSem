#include<iostream>
using namespace std;
int main()
{
    int i,a=0,b=1,c=1,d,n;
    cout<<"Enter the range for fibonacci series: ";
    cin>>n;
    cout<<"The series is : ";
    cout<<a<<" "<<b<<" "<<c<<" ";
    for(i=4;i<=n;i++)
    {
        d=a+b+c;
        a=b;
        b=c;
        c=d;
        cout<<d<<" ";
    }
    cout<<endl;
    return 0;
}
