#include <iostream>
#include<cstring>
using namespace std;

class BC
{
	public:
	int b;
		void display()
		{
			cout<<"b is:"<<b<<endl;
		}
};

class D:public BC
{
	public:
		int d;
		void display()
		{
			cout<<"b is:"<<b<<endl;
			cout<<"d is:"<<d<<endl;
		}
};

int main()
{
 	BC *bptr;
 	BC base;
 	bptr=&base;
 	
 	bptr->b=100;
 	cout<<"bptr points to the base object"<<endl;
 	bptr->display();
 	
 	D der;
 	bptr=&der;
 	bptr->b=200;
 	//bptr->d=300;
 	cout<<"bptr now points to the derived object"<<endl;
 	bptr->display();
 	
 	D *dptr;
 	dptr=&der;
 	dptr->d=400;
 	cout<<"dptr points to the derived object"<<endl;
 	dptr->display();
 	
 	//((D*)bptr)->d=400;
  	//((D*)bptr)->display();	
 	 return 0;
}  
