#include<iostream>
#include<cstring>
using namespace std;
void reverse(string);
int main()
{
    string s1;
    cout<<"Enter a String : ";
    cin>>s1;
    cout<<"The reverse of the string is : ";
    reverse(s1);
    return 0;
}
void reverse(string s)
{
   for (int i=s.length()-1; i>=0; i--)
      cout << s[i];
}