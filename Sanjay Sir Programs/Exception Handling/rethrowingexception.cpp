#include <iostream>  
using namespace std; 

void divide(double x,double y)
{
	cout<<"we are inside the function"<<endl;
	try
	{
	if(y==0.0)
		throw y;
	else
		cout<<"Division= "<<x/y<<endl;
   }
   	catch(double)
	{
		cout<<"caught double inside function"<<endl;
	    throw;
	}
}
int main() 
{  
	cout<<"Inside main function"<<endl;
	try
	{
		divide(10.5,2.0);
		divide(20.0,0.0);
	}
	catch(double)
	{
		cout<<"caught double inside main function"<<endl;
	}
	cout<<"end of main\n";
	
	return 0;  
}  


