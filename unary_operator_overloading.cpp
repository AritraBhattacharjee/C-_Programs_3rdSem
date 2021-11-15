#include<iostream>
using namespace std;
class unary{
    int a,b,c,d;
    public:
    void getsir(){
        cout<<"\n enter your values\n :";
        cin>>a>>b;
    }
    void copy(){
        c=a;
        d=b;
    }
    void show(){
        if(a>0){
        cout<<"\n before overloading \n :";
        cout<<a<<" "<<b;
        }
        else if(a==0 && b==0){
            cout<<"\n after normal method function of unary operator :\n";
            cout<<a<<" "<<b;
        }
        else{
            cout<<"\n after overloading \n :";
            cout<<a<<" "<<b;
        }
    }
    void friend operator-(unary &v)
    {
        v.a=-v.a;
        v.b=-v.b;
    }
    void operator+(){
        a=a+c;
        b=b+d;
    }
    
    
};


int main()
{
    unary s1;
    s1.getsir();
    s1.copy();
    s1.show();
    -s1;
    s1.show();
    +s1;
    s1.show();

    return 0;
}