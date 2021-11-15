#include<iostream>

using namespace std;

int main()
{
	int A;
	cout << "Hello World for C++" <<"\n";  /*<<:insertion operator or put to*/
	cin >> A;  // >>:extraction operator or get from
	int x=A<<2;   //1 0 0 0 -> 10000 ->100000 =32
	cout << x; 
	
	// Operator Overloading
	
	return 0;
}


