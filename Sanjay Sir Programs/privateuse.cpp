#include<iostream>
using namespace std;

	class factorial
	{
		int n;
		public:
		int p;
		void getdata(int x)
		{
		n=x;
		cout << n;
		
		}
		void displayfactorial()
		{
		p=1;
		for(int i=1;i<=n;i++)
		{
			p=p*i;
		}
		cout << "\nThe final factorial output is:";
		cout << p;	
		}
	};
	
	int main()
	{
	factorial ob;  //object creation dynamically,Memory heap
	ob.getdata(10);    //ob.method()
	//ob.displayfactorial();
	//cout <<"\n" << ob.n;
	return 0;	
	}

	
	
