/*#include<iostream>
using namespace std;

template<class t>
class Volume
{
    public:
        void vol(t r)
        {
            cout<<"Volume of sphere is << "<<((4/3)*3.14*r*r*r)<<endl;
        }
        void vol(t a,t h)
        {
            cout<<"Volume of the cone :"<<((1/3)*3.14*a*a*h)<<endl;
        }
};
int main()
{
    int r,a,b;
    Volume<int>v1;
    cout<<"Integer Volume : "<<endl;
    cout<<"Enter the radius of the sphere(integer) : ";
    cin>>r;
    v1.vol(r);

    cout<<"Enter the radius and length of the cone(integer) : ";
    cin>>a>>b;
    v1.vol(a,b);

    Volume<float>v2;
    float c,d,e;
    cout<<"Float Volume : "<<endl;
    cout<<"Enter the radius of the sphere(Float) : ";
    cin>>c;
    v1.vol(c);

    cout<<"Enter the radius and length of the cone(Float) : ";
    cin>>d>>e;
    v1.vol(d,e);
    return 0;
}*/
#include<iostream>
using namespace std;
template<typename t>
class cube
{

    public:
    t side;
    void get_side()
    {
        cout<<"Enter the side of the cude : ";
        cin>>side;
    }
    void volume(t side)
    {
        cout<<endl<<"The volume of the cube is : "<<(side*side*side)<<endl;
    }
};

template<typename t>
class cylinder 
{
    public:
    t  length;
    t radius;
    void get_length()
    {
        cout<<"Enter the length and radius of the cylinder : ";
        cin>>length>>radius;
    }
    void volume(t length, t radius)
    {
        cout<<endl<<"The volume of the cylinder is : "<<(3.14*radius*radius*length)<<endl;
    }

};

int main()
{
    cout<<"Integer Parameters : "<<endl;
    cube<int> c1;
    c1.get_side();
    c1.volume(c1.side);

    cylinder<int>cl1;
    cl1.get_length();
    cl1.volume(cl1.length,cl1.radius);

    
    cout<<"Float Parameters : "<<endl;
    cube<float> c2;
    c2.get_side();
    c2.volume(c2.side);

    cylinder<float>cl2;
    cl2.get_length();
    cl2.volume(cl2.length,cl2.radius);
    return 0;
}