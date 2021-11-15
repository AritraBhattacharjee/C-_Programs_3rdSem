#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2,s3;
    cout<<"Enter the 3 strings : ";
    cin>>s1>>s2>>s3;
    cout<<endl<<"Concatenation using + operator : "<<s1+s2+s3<<endl;
    s1.append(s2);
    
    cout<<"Concatenation using append() function : "<<s1.append(s3)<<endl;
    return 0;
}