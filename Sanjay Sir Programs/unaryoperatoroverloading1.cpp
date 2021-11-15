#include <iostream>
using namespace std;
 
class uni 
{
   int x;
   int y;
   int z;
      
   public:
   	void getdata(int a,int b,int c);
   	void display();
   	void operator-(); //operator overloading function declaration
};

void uni::getdata(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void uni::display()
{
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
}
void uni::operator-() //operator overloading definition
{
	x=-x;
	y=-y;
	z=-z;
}

int main()
{
   uni u;
   u.getdata(10,20,-50);
   cout<<"u: ";
   u.display();
   
   -u;    //invoke operator-()   op object->uniary operator
   
   cout<<"u: ";
   u.display();

   return 0;
}
