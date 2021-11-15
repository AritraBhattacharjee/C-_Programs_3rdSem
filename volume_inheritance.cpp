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

class cylinder : public cube
{
    public:
    int length;
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

class rectangular_box : public cylinder
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
    rectangular_box r1;
    
    r1.get_side();
    r1.cube::volume(r1.side); // solving the ambiguity in the inheritance

    r1.get_length();
    r1.cylinder::volume(r1.length,r1.radius);

    r1.get_data();
    r1.rectangular_box::volume(r1.len,r1.wid,r1.height);

    return 0;
}
