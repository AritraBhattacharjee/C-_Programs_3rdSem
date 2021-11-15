#include<iostream>
#include<cmath>
using namespace std;
class square{
    private:
    int length;
    public:
    void getdata();
    friend void printArea1(square s);
};
class circle{
    private:
    int radius;
    public:
    void getdata();
    void printArea2();
};
class rectangle{
    private:
    int len,breadth;
    public:
    void getdata();
    void printArea3();
};
class triangle{
    private:
    double side1,side2,side3;
    public:
    void getdata();
    void printArea4();
};
void square:: getdata()
{
    cout<<"Enter the length of the side : ";
    cin>>length;
}
void circle:: getdata()
{
    cout<<"Enter the radius : ";
    cin>>radius;
}
void rectangle:: getdata()
{
    cout<<"Enter the length and the breadth: ";
    cin>>len>>breadth;
}
void triangle:: getdata()
{
    cout<<"Enter the 3 sides of the triangle: ";
    cin>>side1>>side2>>side3;
}
//friend function defination:
void printArea1(square s)
{
    cout<<"The Area of Square is :"<<(s.length*s.length) <<endl;
}
void circle:: printArea2()
{
    cout<<"The Area is Circle is :"<<(3.14*radius*radius) <<endl;
}
void rectangle::printArea3()
{
    cout<<"The Area of rectangle is :"<<(len*breadth) <<endl;
}
void  triangle ::printArea4()
{
    double s = (side1 + side2 +side3)/2;
    double area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    cout<<"The Area triangle is :"<< area<<endl;
}

int main()
{
    square s1;
    circle c1;
    rectangle r1;
    triangle t1;

    s1.getdata();
    printArea1(s1);

    c1.getdata();
    c1.printArea2();

    r1.getdata();
    r1.printArea3();

    t1.getdata();
    t1.printArea4();

    return 0;
}