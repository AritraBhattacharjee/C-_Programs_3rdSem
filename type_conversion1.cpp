#include<iostream>
using namespace std;
class Distance
{   
    int kilometer;
    int meter;
    public:
    Distance()
    {
        kilometer = 0;
        meter = 0;

    }
    Distance(int dist)
    {
        kilometer = dist/1000;
        meter = dist%1000;
    }
    void display()
    {
        cout<<"Distance = "<<kilometer<<"  kms and "<<meter<<" mts"<<endl;
    }
};

int main()
{
    int dis;
    Distance d1;
    cout<<"Enter a distance in meters : ";
    cin>> dis;
    
    d1 = dis;
    d1.display();

    return 0;
}