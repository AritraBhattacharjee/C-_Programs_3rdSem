/*
3.	Write a C++ program to throw an exception using a single try block and handle the same using multiple catch blocks.
*/

#include<iostream>
using namespace std;

void A(int x)
{
    try
    {
        if(x == 0) 
            throw(x);
        if(x == 1)
            throw('x');
    }
    catch(char c)
	{
		cout<<"Caught a character"<<endl;
	}
	catch(int m)
	{
		cout<<"Caught an integer"<<endl;
	}
    
}
int main()
{
    int x;
    cout<<"press 0 for integer, 1 for character : ";
    scanf("%d",&x);
    A(x);

    return 0;
}
