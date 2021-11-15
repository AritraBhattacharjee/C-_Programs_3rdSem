//Run-Time Polymorphism using Virtual Function
#include <iostream>
#include<cstring>
using namespace std;

class Base
{
public:
	virtual void display(){
	cout<<"display base class"<<endl;}
	virtual void show(){
	cout<<"Show base class"<<endl;
	}
};

class Derived:public Base
{
public:
	virtual void display(){
	cout<<"display derived class"<<endl;
	}
	virtual void show(){
	cout<<"Show derived class"<<endl;
	}	
};

int main()
{
 	Base B;
 	Derived D;
 	Base *bptr;
 	
 	cout<<"bptr points to Base"<<endl;
 	bptr=&B;
 	bptr->display();
 	bptr->show();
 	
 	cout<<"\nbptr points to Derived"<<endl;
 	bptr=&D;
 	bptr->display();
 	bptr->show();
 	 
 	 return 0;
}  
