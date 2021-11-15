#include<iostream>
using namespace std;

	class factorial
	{
		public:
		int n;
		int p;
		int a=5;
		
		public:
		void getdata();
		void displayfactorial();
	};
	
	void factorial :: getdata()   //:: scope resolution operator
	{
		cout << "Enter the number to do the factorial";
		cin >> n;
	}
	
	void factorial :: displayfactorial()
	{
		p=1;
		for(int i=1;i<=n;i++)
		{
			p=p*i;
		}
		cout << "\nThe final factorial output is:";
		cout << p;
	}
	
	int main()
	{
	factorial ob;  //object creation dynamically,Memory heap
	ob.getdata();    //ob.method()
	ob.displayfactorial();
	cout <<"\n" << ob.a;
	return 0;	
	}
