#include<iostream>
using namespace std;
class Number{
    int x,y;
    public:
    Number(int a,int b){
        x=a;
        y=b;
    }
    Number(const Number &n1)
    {
        x = n1.x;
        y = n1.y;
    }
    void display()
    {
        cout<< x<<"  "<<y<<endl;
    }
};

int main()
{
    int c,d;
    cout<<"Enter two Number : ";
    cin>>c>>d;
    Number n1(c,d); // parameterized constructor
    Number n2 = n1; // copy constructor
    cout<<"Values from Normal Parameterized constructor : ";
    n1.display();
    cout<<"Values from Copy Constructor : ";
    n2.display();
    return 0;
}