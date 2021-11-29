#include <iostream>
using namespace std;

template<class X> void fun(X a)
{
    std::cout << "Value of a is : " <<a<< std::endl;
}
template<class X,class Y> void fun(X b ,Y c)
{
    std::cout << "Value of b is : " <<b<< std::endl;
    std::cout << "Value of c is : " <<c<< std::endl;
}
int main()
{
   fun(10);
   fun(20,30.5);
   return 0;
}

/*
//An example of an overloaded function which cannot be replaced by the generic function as both the functions have different functionalities

#include <iostream>
using namespace std;
void fun(double a)
{
    cout<<"value of a is : "<<a<<'\n';
}

void fun(int b)
{
    if(b%2==0)
    {
        cout<<"Number is even";
    }
    else
    {
        cout<<"Number is odd";
    }

}

int main()
{
   fun(4.6);
   fun(6);
   return 0;
}  */
