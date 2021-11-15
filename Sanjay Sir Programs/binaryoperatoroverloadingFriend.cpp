#include <iostream>

using namespace std;
  
class Complex 
{	
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)  
	{
	real = r;   
	imag = i;
	}
   
friend Complex operator +(Complex &,Complex &);   //friend function declaration for operator overloading
   
//A friend function requires two arguments to be explicitly passed to it, while a member function requires only one
    
    void print()  
	{ 
	cout << real << " + i" << imag << endl; 
	}
};
   
Complex operator + (Complex &a,Complex &b) 
	{
         return Complex((a.real + b.real), (a.imag + b.imag));
    }
    
int main()
{
    Complex c1(10, 5), 
	c2(2, 4);
    Complex c3;
	c3=c1+c2; // An example call to "operator+"  //c3=c1.operator+(c2)  
    c3.print();

	return 0;
}
