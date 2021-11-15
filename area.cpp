#include<iostream>
using namespace std;

class circle
{
    int r;
    public:
    void getData();
    void printArea();
};

void circle::getData()
{
    cout<<"Enter the radius of the circle : ";
    cin>>r;
}

void circle::printArea()
{
    cout<<"The area of the circle is "<<(3.14*r*r)<<endl;
}

class rectangle
{
    int l,b;
    public:
    void getData();
    void printArea();
};

void rectangle::getData()
{
    cout<<"Enter the Length and Breadth of the rectangle : ";
    cin>>l>>b;
}

void rectangle::printArea()
{
    cout<<"The area of the rectangle is "<<(l*b)<<endl;
}

int main()
{
    circle c;
    rectangle d;
    c.getData();
    c.printArea();
    d.getData();
    d.printArea();
    return 0;
}