#include <iostream>
using namespace std;

class Base1
{
 	public:
 	int x;
 	void getx()
    {
 	    cout << "enter value of x: "; cin >> x;
    }
};

class Base2
{
 	public:
 	int y;
 	void gety()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
};

class C : public Base1, public Base2   //C is derived from class A and class B
{
 	public:
 	void sum()
 	{
 	    cout << "Sum = " << x + y;
 	}
};

int main()
{
 	 C obj1; //object of derived class C
 	 obj1.getx();
 	 obj1.gety();
 	 obj1.sum();
 	 return 0;
}  
