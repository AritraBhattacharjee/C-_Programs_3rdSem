#include<iostream>

using namespace std;

template<typename T>
void getArray(T arr[],int n)
{
    cout<<"Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}
template<typename T>
void printArray(T arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
template<typename T>
void bubble_sort(T arr[],int n)
{
    for(int i = 0; i< n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
        
    }
}
int main()
{
    int n;
    cout<<"Bubble sort of integers  : "<<endl;
    cout<<"Enter the size of the array : ";
    cin>>n;
    
    int *arr = new int[n];
    getArray<int>(arr,n);

    bubble_sort<int>(arr,n);
    cout<<"The sorted integer array is : ";
    printArray<int>(arr,n);


    cout<<"Bubble sort of characters : "<<endl;
    cout<<"Enter the size of the array : ";
    cin>>n;
    
    char * ch = new char[n];
    getArray<char>(ch,n);
    bubble_sort<char>(ch,n);
    cout<<"The sorted character array is : ";
    printArray<char>(ch,n);

    return 0;
}