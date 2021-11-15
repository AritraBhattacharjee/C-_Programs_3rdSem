#include<iostream>
using namespace std;
class addition
{
  public:
    int a,b;
    addition()
    {
        a=0;b=0;
    }
    ~addition()
    {
        cout<<"The object of addition is deleted."<<endl;
    }
    void getdata1(){
        cout<<"Enter two numbers : ";
        cin>>a>>b;
    }
    void display(){
        cout<<"The sum is : "<<(a+b)<<endl;
    }
};
class  substraction
{
    public:
    int a,b;
    substraction()
    {
        a=0;b=0;
    }
    ~substraction()
    {
        cout<<"The object of substraction is deleted."<<endl;
    }
    void getdata2(){
        cout<<"Enter two numbers : ";
        cin>>a>>b;
    }
    void display(){
        cout<<"The difference is : "<<(a-b)<<endl;
    }
};
class multiplication
{
    public:
    int a,b;
    multiplication()
    {
        a=0;b=0;
    }
    ~multiplication()
    {
        cout<<"The object of multiplication is deleted."<<endl;
    }
    void getdata3(){
        cout<<"Enter two numbers : ";
        cin>>a>>b;
    }
    void display(){
        cout<<"The product is : "<<(a*b)<<endl;
    }

};

int main()
{
    int a,b;
    addition a1;
    a1.getdata1();
    a1.display();
    // a1.~addition();

    substraction s1;
    s1.getdata2();
    s1.display();
    // s1.~substraction();


    multiplication m1;
    m1.getdata3();
    m1.display();
    // m1.~multiplication();

    return 0;
}