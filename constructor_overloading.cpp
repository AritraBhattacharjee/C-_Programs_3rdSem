#include<iostream>
using namespace std;
class volume{
    
    public:
    float area;
    volume()
    {
        area = 0;
    }
    volume(int a)
    {
        area = a*a*a;
    }
    volume(int r, int h)
    {
        area = 3.14*r*r*h;
    }
    volume(int l,int b,int h1)
    {
        area = l*b*h1;
    }
    void display()
    {
        cout<<"The area is : "<<area<<endl;
    }
};

int main()
{
    int side, radius, height, length, width, height1;
    
    cout<<"Enter the size of the cube : ";
    cin>>side;
    volume v1(side);
    v1.display();

    cout<<"Enter the radius and height of the cylinder: ";
    cin>>radius>>height;
    volume v2(radius,height);
    v2.display();

    cout<<"Enter the length, breadth and height of the recgtangular box: ";
    cin>>length>>width>>height1;
    volume v3(length,width,height1);
    v3.display();

    return 0;
}