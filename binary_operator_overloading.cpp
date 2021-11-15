#include <iostream> 
using namespace std;

class Distance
{
public:
    int kilometer, meter;
    Distance()
    {
        kilometer = 0;
        meter = 0;
    }
 
    Distance(int f, int i)
    {
        kilometer = f;
        meter = i;
    }
    // using friend function
    friend Distance operator+(Distance&, Distance&);
};
 

Distance operator+(Distance& d1, Distance& d2)
{
    Distance d3;
    d3.kilometer = d1.kilometer + d2.kilometer;
    d3.meter = d1.meter + d2.meter;
 
    return d3;
}

int main()
{
    int km1,m1,km2,m2;
    cout<<"Enter 1st distance in kms and meter : ";
    cin>>km1>>m1;
    Distance d1(km1,m1);
 
    cout<<"Enter 1st distance in kms and meter : ";
    cin>>km2>>m2;
    Distance d2(km2,m2);
 
    Distance d3;
 
    d3 = d1 + d2;
 
    cout << "\nTotal Distance is :  " << d3.kilometer << "  kms  " << d3.meter<<"  mts  "<<endl;
    return 0;
    
}
