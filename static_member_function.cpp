#include<iostream>
using namespace std;
class data
{
    
    int n;
    
    public:
    static int ctr;
    static void print()
    {
        cout<<"This is a call"<<endl;
        ctr++;
    }
    static void count()
    {
        cout<<"Number of calls"<<ctr<<endl;
    }

};


int main()
{
    data d1;
    data::print();
    data::count();

    return 0;
}
