#include<iostream>
using namespace std;

class sum
{
    public:
    void add(int a,int b)
    {
        cout<<"The sum is : "<<a+b<<endl;
    }
};
class substract: public virtual sum
{
    public:
    void difference(int a,int b)
    {
        cout<<"The difference is : "<<a-b<<endl;
    }
};
class multiply:public virtual substract
{
    public:
    void product(int a,int b)
    {
        cout<<"The product is : "<<a*b<<endl;
    }    
};