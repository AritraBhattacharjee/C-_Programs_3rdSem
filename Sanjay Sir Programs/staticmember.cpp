#include<iostream>
using namespace std;

	class item
	{
	    static int count;
		int number;
		
		public:
			
		void getdata(int a)
		{
			number=a;
			count++;
		}
		void getcount()
		{
			cout<<"Count:"<<count<<endl;
		}
		static void countable()
		{
		 cout<<"This program represents the use of static members"<<endl;
		}
	};
	
    int item::count; //Static data member

	
	int main()
	{
    item a,b,c;
   	a.getcount();
	b.getcount();
	c.getcount();
	
	a.getdata(50);
	b.getdata(100);
	c.getdata(200);
	
	cout<<"after reading"<<endl;
	
	a.getcount();
	b.getcount();
	c.getcount();
	
	cout<<"\n"<<"Staic member method"<<endl;
	item::countable();   //Staic member method
		
	return 0;	
	}
