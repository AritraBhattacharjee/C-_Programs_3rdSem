/*
Write a C++ program to write a generic function template that can be used for different data types. Examples of function templates are max(), min().
*/
#include<iostream>
using namespace std;
template<typename T>
T maxi(T a, T b)
{
    return (a>b)?a:b;
}
template<typename T>
T mini(T a, T b)
{
    return (a<b)?a:b;
}
int main()
{
    int a,b;
    float c,d;
    char e,f;
    cout<<"Enter two integer numbers : ";
    cin>>a>>b;
    cout<<"Comparison of 2 integer Numbers: "<<endl;
    cout<<"Maximum Element of " <<a<< " and "<< b <<" is : "<<maxi<int>(a,b)<<endl;
    cout<<"Minimum Element of " <<a<< " and "<< b <<" is : "<<maxi<int>(a,b)<<endl;

    cout<<"Enter two float numbers : ";
    cin>>c>>d;
    cout<<"Comparison of 2 float Numbers: "<<endl;

    cout<<"Maximum Element of " <<c<< " and "<< d <<" is : "<<maxi<float>(c,d)<<endl;
    cout<<"Minimum Element of " <<c<< " and "<< d <<" is : "<<mini<float>(c,d)<<endl;
    
    cout<<"Enter two characters : ";
    cin>>e>>f;
    cout<<"Comparison of 2 characters: "<<endl;

    cout<<"Maximum Element of " <<e<< " and "<< f <<" is : "<<maxi<char>(e,f)<<endl;
    cout<<"Minimum Element of " <<e<< " and "<< f <<" is : "<<mini<char>(e,f)<<endl;


    return 0;
}