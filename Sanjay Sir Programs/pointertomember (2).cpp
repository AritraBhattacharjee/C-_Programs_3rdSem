#include<iostream>
using namespace std;

class A {
  
  public:
  	int m=10;
  	void show();
};

int A::* ip=&A::m;

void A::show()
{
	cout<<"This is pointer to member"<<endl;
}

int main() 
{
   A ob;
   cout<<ob.*ip;
   cout<<ob.m;
   return 0;
}


