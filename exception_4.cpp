/*Write a C++ program to generate a function ‘division()’ that performs division by zero task, show how a try block invokes that division() function and handle the generated exception*/

#include <iostream>  
using namespace std; 

void division(int x,int y,int z)
{
	if((x-y)!=0)
	{
		int R=z/(x-y);
		cout<<"Result="<<R<<endl;
	}
	else
	{
		throw(x-y);
	}
}

int main() 
{  
    int a,b,c;
    cout<<"Enter 3 numbers : "<<endl;
    cin>>a>>b>>c;
	try
	{
		division(a,b,c);
		
	}
	catch(int i)
	{
		cout<<"Exception caught. X = "<<i<<endl;
	}
	return 0;  
}  


