/*Write a C++ program to write a class template that is useful when a class
defines something that is independent of the data type. Example of function
template is printArray().*/

#include<iostream>
using namespace std;

template<typename T>
class Array
{
private:
    int size;
    T *arr;
public:
    Array()
    {
        cout<<"Enter the size of the array : ";
        cin>>size;
        arr = new T[size];
    }
    void getElement()
    {
        cout<<"Enter the array elements : ";
        for(int i = 0; i<size;i++)
        {
            cin>>arr[i];
        }
    }

    void printArray()
    {
        cout<<endl<<"The array Elements are ";
        for(int i = 0; i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    cout<<"Integer Elements : "<<endl;
    Array<int>a;
    a.getElement();
    a.printArray();

    cout<<endl<<"Character Elements : "<<endl;
    Array<char>c;
    c.getElement();
    c.printArray();
    return 0;
}
