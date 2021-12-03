#include<iostream>
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
    v2.vol(c);

    cout<<"Enter the radius and length of the cone(Float) : ";
    cin>>d>>e;
    v2.vol(d,e);
    return 0;
}