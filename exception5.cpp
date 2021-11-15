/*Write a C++ program to invoke function that generates own exception*/
#include<iostream>
using namespace std;
void division(int a,int b){
	if(b==0)
    {
		throw b;
	}
	else
    {
		float result= (float)a/b;
		cout<<"Reslt is: "<<result;
	}
}

int main()
{
	int a,b;
	cout<<"Enter the two numbers: ";
	cin>>a>>b;

	try
    {
		division(a,b);
	}
	catch(int x)
    {
		cout<<endl<<"Exception caught : X = "<<x<<endl;
	}
	return 0;
}
