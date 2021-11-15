#include<iostream>
using namespace std;
class data
{
    private:
    static int ctr;// this is a static variable of integer type and is private
    public:
    void print() // a function to print a dummy statement and increment the private counter variable'ctr'
    {
        cout<<"This is a call"<<endl;
        ctr++;
    }
    static int count() // static member function to return the counter.
    {
        return ctr;
    }

};
int data::ctr=0; // initialisation of the static variable

int main()
{
    ::data d1;  // creating one object of 'data' class
    d1.print(); // 1st call => incrementing the counter by 1 => ctr= 1
    cout<<"count after 1 call: "<<data::count<<endl;
    d1.print(); // 1st call => incrementing the counter by 1 => ctr = 2
    cout<<"count after 2 call: "<<data::count()<<endl;
    return 0;
}
