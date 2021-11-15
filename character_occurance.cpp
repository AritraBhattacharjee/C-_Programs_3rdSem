#include<iostream>
#include<string>
using namespace std;
int count_char(string,char);
int main()
{
    char ch[25],c;
    cout<<"Enter a line : ";
    cin.getline(ch, 25);
    string s1 = string(ch);
    cout<<"Enter a character to be searched in the string : ";
    cin>>c;
    int number = count_char(s1,c);
    cout<<endl<<" "<<c<<" occurs "<< number <<" times in the given input string"<<endl;

    return 0;

}
int count_char(string s, char c)
{
    int n = 0;
    for (int i=0;i<s.length();i++)
    {
        if (s[i] == c)
        {
            n++;
        }
    }
    return n;
}