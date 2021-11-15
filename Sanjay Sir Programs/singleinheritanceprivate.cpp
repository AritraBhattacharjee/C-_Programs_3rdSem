#include<iostream>
using namespace std;

class A {
   int val=40;  //private can't be inherited
   
   public:   //public ready for inherited
   int p=5;          
   void getValue();
};

void A::getValue()
{
	cout<<"the variable of class A is:"<<p<<endl;
	cout<<"the val of class A is:"<<val<<endl;
}

class B: private A   //class B inherits class A
{

public:
	void display();
	int f=1;
	void fact()
	{
		for(int i=1;i<=p;i++)
		f=f*i;
		cout<<"the factorial of class B is:"<<f<<endl;
	}
};

void B::display()
{
	getValue();
}
int main() 
{
  B ob;
  //cout<<"class A variable p:"<<ob.p<<endl;
  //ob.getValue();
  ob.fact();
  ob.display();
  return 0;
}
