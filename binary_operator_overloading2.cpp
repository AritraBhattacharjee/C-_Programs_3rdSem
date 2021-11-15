#include <iostream>
using namespace std;
class Complex_Multiply 
{	
private:
    int real, imag;
public:
    Complex_Multiply(int r = 0, int i =0)  
	{
	real = r;   
	imag = i;
	}
    // using normal member function
     Complex_Multiply operator *(Complex_Multiply const &obj)
     {
         Complex_Multiply product;
         product.real = real * obj.real;
         product.imag = imag * obj.imag;
         return product;
     }   
    
    void Display() 
	{ 
	cout <<"The product is : "<<  real << "  + i  " << imag << endl; 
	}
};

    
int main()
{
    int a,b,c,d;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    Complex_Multiply m1(a,b);
    cout<<"Enter another set of two numbers : ";
    cin>>c>>d; 
    Complex_Multiply  m2(c,d);
    Complex_Multiply m3;
    m3 = m2 * m1;
    m3.Display();
    return 0;
}
