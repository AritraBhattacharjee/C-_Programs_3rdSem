#include<iostream>
using namespace std;

class A    //Base class/Parent class
{
   int val;  //private can't be inherited
   
   public:   //public ready for inherited
   int p=5;
   void getValue();          
   /*void getValue() 
   {
      val=10;
      cout<<"the variable of class A is:"<<val<<endl;
   }*/
};

void A::getValue()
{
	 val=10;
     cout<<"the variable of class A is:"<<val<<endl;
}

class B:public A   //class B inherits class A //Reusability of code
{
int c=50;
public:
	int f=1;
	void fact()
	{
		for(int i=1;i<=p;i++)
		f=f*i;
		cout<<"the factorial of class B is:"<<f<<endl;
		cout<<"C variable of class B is:"<<c<<endl;
	}
};

int main() 
{
  B ob;
  cout<<"class A variable p:"<<ob.p<<endl;
  ob.getValue();
  //cout<<ob.val;
  ob.fact();
  return 0;
}
