#include<iostream>
using namespace std;
class kilometers
{
    int kms,mts;
    public:

    kilometers(int x,int y)
    {
        kms =x;
        mts = y;
    }
    int getkms()
    {
        return kms;
    }
    int getmts()
    {
        return mts;
    }
    void display()
    {
        cout<<"The distance is : "<<kms<<" kms"<<" and "<<mts<<" mts. "<<endl;
    }
};

class miles
{
    float m;
    public:
    miles()
    {
        m = 0;
    }
    miles( kilometers dist)
    {
        int meters;
        meters = (dist.getkms()*1000)+dist.getmts();
        
        m = 0.000621 * meters;
    }
    void display()
    {
        cout<<"The distance in miles = "<<m<<" miles."<<endl;
    }
};

int main()
{
    int km, mt;
    cout<<"Enter the distance in kilometers and meters : ";
    cin>>km>>mt;
    kilometers k1(km,mt);
    miles m1;
    m1 =  k1;
    k1.display();
    m1.display();

    return 0;
}