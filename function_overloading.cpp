#include<iostream>
using namespace std;

class cube
{

    public:
    int side;
    void get_side()
    {
        cout<<"Enter the side of the cude : ";
        cin>>side;
    }
    void volume(int side)
    {
        cout<<endl<<"The volume of the cube is : "<<(side*side*side)<<endl;
    }
};

class cylinder 
{
    public:
    int  length;
    float radius;
    void get_length()
    {
        cout<<"Enter the length and radius of the cylinder : ";
        cin>>length>>radius;
    }
    void volume(int length, float radius)
    {
        cout<<endl<<"The volume of the cylinder is : "<<(3.14*radius*radius*length)<<endl;
    }

};

class rectangular_box 
{
    public:
    int len,wid,height;
    void get_data()
    {
        cout<<endl<<"Enter the length, breadth, height of the box : ";
        cin>>len>>wid>>height;
    };
    void volume(int len, int wid, int height)
    {
        cout<<endl<<"The volume of the rectangular box is : "<<(len*wid*height)<<endl;
    }
};
int main()
{
    cube c1;
    c1.get_side();
    c1.volume(c1.side);

    cylinder cl1;
    cl1.get_length();
    cl1.volume(cl1.length,cl1.radius);

    rectangular_box r1;
    r1.get_data();
    r1.volume(r1.len,r1.wid,r1.height);


    return 0;
}