#include<iostream>
using namespace std;

class Base 
{
   int val=40;  //private can't be inherited
   
   protected:
 	int pro=60;
 	void promethod()
 	{
 		cout<<"This is a protected access visibility modifier of Base class"<<endl;
	}
	 
   public:   //public ready for inherited
   int p=5;          
   void getValue();
};

void Base::getValue()
{
	cout<<"the variable of class Base is:"<<p<<endl;
	cout<<"the val of class Base is:"<<val<<endl;
}

class Derived: public Base   //class B inherits class A
{
public:
	void display();
	int f=1;
	void fact()
	{
		cout<<"protected variable:"<<pro;
		for(int i=1;i<=p;i++)
		f=f*i;
		cout<<"the factorial of class Derived is:"<<f<<endl;
	}
};

void Derived::display()
{
	cout<<"The Base class protected member:"<<pro<<endl;
	promethod();
}

class derived2:public Derived
{
	public:
		void print()
		{
		cout<<"protected variable:"<<pro;	
		}
};

int main() 
{
  derived2 ob;
  //cout<<"protected variable:"<<ob.pro;
  ob.fact();
  ob.display();
  ob.print();
  return 0;
}
