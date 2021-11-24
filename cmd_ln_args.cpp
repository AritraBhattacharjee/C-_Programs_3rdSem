/*Write a C++ program to handle command line arguments using argc and argv[]. Take a set of numbers as input through an int array. Then create two files ORIGINAL and SORTED using the command line arguments and write the original array to the file ORIGINAL and the sorted array to the file SORTED. The program finally displays the contents of both the files*/

#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    ofstream f1, i1, i2;
    ifstream ifile;
    int k = 0;
    int *arr = new int[argc - 1];
    i1.open("ORIGINAL");
    for (int i = 1; i <= argc; i++)
    {
        arr[k] = atoi(argv[i]);
        i1 << arr[k]<<endl;
        k++;
    }

    sort(arr, arr + k);
    i1.close();

    i2.open("SORTED");
    for (int i = 0; i < k; i++)
    {
        i2 << arr[i]<<endl;
    }
    i2.close();

    cout << "Contents of the ORIGINAL file : ";
    
    ifile.open("ORIGINAL");
    
    for (int i = 0; i < k; i++)
    {
        int ele;
        ifile >> ele;
        cout << ele << " ";
    }

    ifile.close();

    cout <<endl<< "Contents of the SORTED file : ";
    
    ifile.open("SORTED");
    
    for (int i = 0; i < k; i++)
    {
        int ele;
        ifile >> ele;
        cout << ele << " ";
    }

    ifile.close();
    return 0;
}