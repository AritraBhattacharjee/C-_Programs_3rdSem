/*1. Write a C++ program to create single, multilevel, multiple and hybrid inheritance to calculate the area of any three geometrical objects (Hint: Classes Circle, Rectangle, Square) */

#include <iostream>
using namespace std;
class circle
{
    public:
        float r;
        void getradius()
        {
            cout << "Enter the radius of the circle : ";
            cin >> r;
        }
};

class Length
{
    public:
        int side;
        void getSide()
        {
            cout << "Enter the side : ";
            cin >> side;
        }
};
class breadth
{
    public:
        int width;
        void getBreadth()
        {
            cout << "Enter the width : ";
            cin >> width;
        }
};

class area1 : public circle
{
    public:
        void getcircle()
        {
            getradius();
        }
        void area_circle()
        {
            cout << "The radius of the circle is : " << (3.14 * r * r) << endl;
        }
};

class area2 : public Length // single inheritance -> length class inherited to class area2
{
    public:
        void getLength()
        {
            getSide();
        }
        void area_square()
        {
            cout << "The area of the square is : " << (side * side) << endl;
        }
};

class area3 : public breadth, public area2 
// multiple inheritance -> 2 base classes "breadth & area2" and a single derived class area3
// multi level inheritance -> Length class inherited to class area2 which in turn is inherited to class area3
{
    public:
        void getRectangle()
        {
            getLength();
            getBreadth();
        }
        void area_rectangle()
        {
            cout << "The area of the rectangle : " << (side * width) << endl;
        }
};

// As there are three inheritances -> single,multiple & multilevel, so this is a hybrid inheritance

int main()
{
    area1 a1;
    a1.getcircle();
    a1.area_circle();

    area2 a2;
    a2.getLength();
    a2.area_square();

    area3 a3;
    a3.getRectangle();
    a3.area_rectangle();

    return 0;
}
