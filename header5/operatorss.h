#include<iostream>
using namespace std;

class complex
{
    private:
    int x,y;
    public:
    complex(){x=0;y=0;};
    complex(int real,int imag)
    {
        x = real;
        y = imag;
    }
    bool operator !=(complex c)
    {
        complex temp;
        if(c.x != temp.x && c.y != temp.y)
            return true;
        else   
            return false;
    }

    bool operator ==(complex d)
    {
        complex temp;
        if(d.x == temp.x && d.y == temp.y)
            return true;
        else
            return false;
    }

};