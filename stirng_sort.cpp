#include<iostream>
using namespace std;

void sort(string[],int);

int main()
{
    int n,i;
    cout<<"Enter the number of countries : ";
    cin>>n;
    string arr[n];
    cout<<"Enter the name of the countries : ";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,n);
    return 0;

}

void sort(string arr[], int n)
{
    string temp;
    int i,j;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
    cout<<endl<<"The sorted array is : ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


/*
void sort(string *arr, int n)
{
    string temp;
    int i,j;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if((*(arr + j+1))<*(arr+j))
            {
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp; 
            }
        }
    }
    cout<<endl<<"The sorted array is : ";
    for (i = 0; i < n; i++)
        cout << *(arr+j) << " ";
    cout << endl;
    
}
*/