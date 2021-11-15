#include<iostream>
using namespace std;

class multy {
  	int m,n;
  	public:
  	multy(void);
  	multy(int,int); //Constructor declaration
};

multy::multy(void)
{
	cout<<"This is default constructor"<<endl;
}

multy::multy(int x,int y)  //Constructor definition
{
	cout<<"This is parameterized constructor"<<endl;
	m=x;
	n=y;
	cout<<"m="<<m<<endl;
  	cout<<"n="<<n<<endl;
}

int main() 
{
   multy ob;
   
   multy ob1(10,20);  //implicit call
   
   //multy ob2=multy(15,20);  //explicit call
  
   return 0;
}


