#include<iostream>
using namespace std;

void display_city(string[], int);

int main()
{
    int n ,i;
    cout<<"Enter the number of cities : ";
    cin>>n;
    string arr[n];
    cout<<endl<<"Enter the cities :";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    display_city(arr,n);

    return 0;
}

void display_city(string arr[], int n)
{
    cout<<"Cities with B or C: ";
    string s;
    for (int i = 0; i < n; i++)
    {
        s = arr[i];
        
        if(s[0] == 'B' || s[0] == 'b'||s[0] == 'C'||s[0] == 'c')
        {
            cout<<s<< " ";
        }
        s= "";
    }
    cout<<endl;
    
}
