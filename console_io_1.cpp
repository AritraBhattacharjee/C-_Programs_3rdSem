/*
1.Write a C++ program to show the use of unformatted I/O operations using >>, <<, get(), put(), getline() and write() functions.
*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    char s[10];
    cout<<endl<<"Enter a text : ";
    cin.getline(s,10); // input through getline function 
    cout<<endl<<"Printing through write() function"<<endl; 
    // for (int i = 0; i < strlen(s); i++)
    {
        cout.write(s,strlen(s));// output through write function
    }

    string a;
    cout<<endl<<" Input Output through << & >> operators : "; 
    cin>>a; // input through << operator
    cout<<"You Entered : "<<a; // output through >> operator

    
    
	char c;
	cout<<endl<<"Input Output Operation through put and get";
	cout<<endl<<"Enter a text : ";
	cin.get(c);
	
	while(c!='\n')
	{
		cout.put(c); // printing the recieved character
		cin.get(c); // taking the character from console
	}

    return 0;
}