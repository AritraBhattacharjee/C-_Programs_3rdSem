#include <iostream>  
using namespace std; 
 
int main( ) 
{  
	int a,b;
	cout<<"enter values of a and b"<<endl;
	cin>>a;
	cin>>b;
	int x=a-b;
	//int res=a/x;
	//cout<<res;
	try
	{
		if(x!=0)
		{
			cout<<"Result(a/x):"<<a/x<<endl;  //division by zero
		}
		else
		{
			throw(x);  //throws int object	
		}
	}
	catch(int i)
	{
		cout<<"exception caught:x="<<x<<endl;
	}
	
	cout<<"END";
	
	return 0;  
}  
