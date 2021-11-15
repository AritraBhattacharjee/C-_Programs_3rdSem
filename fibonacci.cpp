#include<iostream>
using namespace std;
int main()
{
    int i,a=0,b=1,c,n;
    cout<<"Enter the range for fibonacci series: ";
    cin>>n;
    cout<<"The series is : ";
    cout<<a<<" "<<b<<" ";
    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}
