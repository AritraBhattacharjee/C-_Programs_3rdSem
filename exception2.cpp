/*
2.	Write a C++ program to throw an exception (Array index out of bounds) using a single try block and handle the same using a single catch block.
*/

#include<iostream>

using namespace std;

int main()
{
    int *arr,i,n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    arr = new int[n];
    try
    {
        for(i = 0; i<=n; i++)
        {
            if(i<n)
                cin>>arr[i];
            else
                throw(i);
        }
    }
    catch(int x)
    {
        cout<<"Exception caught. Array Index Out of Bounds. N >  "<<x;
    }
    cout<<endl<<"The array elements are: ";
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    free(arr);
    return 0;
}