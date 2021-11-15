#include<iostream>
using namespace std;

class A {
   public:         
   void display() 
   {
      cout<<"this is class A"<<endl;
   }
};

class B 
{
 public:         
   void display() 
   {
      cout<<"this is class B"<<endl;
   }
};

class C:public A,public B  //Multiple Inheritance
{
	//cout<<"This is a Class C"<<endl;
  public:         
   void display() 
   {
      //A::display();
      cout<<"This is a Class C"<<endl;
   }
};

int main() 
{
  C ob;  //Ambiguity in Inheritance
  ob.A::display();
  //ob.display(); //class B display() method overrides class A display() at the run-time //Method overridden
  //Solution
  //ob.A::display();
  //ob.B::display();
  return 0;
}
