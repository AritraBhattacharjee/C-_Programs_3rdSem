#include<iostream>
using namespace std;

class Demo {
   int val;
   public:
   Demo(int x = 0) //Constructor
   {
      val = x;
   }
   int getValue() const 
   {
      return val;
   }
};
int main() 
{
   const Demo d(28);
   //Demo d(12);
   Demo d1(8);
   cout << "The value using object d : " << d.getValue();
   cout << "\nThe value using object d1 : " << d1.getValue();
   return 0;
}










/*#include<iostream>
using namespace std;

class multy
{
public:
void mul(int,int) const;
};

void multy::mul(int a, int b) const
{
	int c=a*b;
	cout<<"Result is:"<<c;
}

int main()
{
cout<<"Constant member function"<<endl;
multy m;
m.mul(10,20);  
return 0;
}*/

