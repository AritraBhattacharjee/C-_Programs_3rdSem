#include<iostream>
using namespace std;
#define PI 3.14
class area{
    public:
    int side;
    
    area() // Non paramerterized constructuor or default constructor
    {
        cout<<"Enter the side of the square: ";
        cin>>side;
        cout<<"Area of Square is : "<<(side*side)<<endl;
    }
    area(float radius) // Parameterized construcutor
    {
        cout<<"Area of the circle is : "<<(3.14*radius*radius)<<endl;
    }
    area(int length, int breadth) // Parameterized construcutor
    {
        cout<<"The area of the rectangle is : "<<(length*breadth);
    }
};

int main()
{
    int n,l,b;
    float rad;
    area a1;  // default function call

    cout<<"Enter the radius of the circle: ";
    cin>>rad;
    area a2(rad); // parameterized constructor call

    cout<<"Enter the length and breadth of the rectangle: ";
    cin>>l>>b;
    area a3(l,b);   // parameterized constructor call

    return 0;

}