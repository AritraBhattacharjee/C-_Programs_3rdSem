/*4. Write a C++ program to handle command line arguments using argc and Argv[].
*/

#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main(int argc, char*argv[])
{
    if(argc!=3)
    {
        cout<<"Argument number not matched"<<endl;
        exit(1);

    }
    int n;
    cout<<"Enter the number of integers to be enterred: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the integers : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    ofstream f1,f2;
    f1.open(argv[1]); // ODD
    f2.open(argv[2]); // EVEN
    if(f1.fail() || f2.fail())
    {
        cout<<"Error in file"<<endl;
        exit(1);
    }
    for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		f2<<arr[i]<<" ";
		else
		f1<<arr[i]<<" ";
	}
    f1.close();
    f2.close();

    ifstream fin;
    char ch;
    for(int i = 1;i<argc;i++ )
    {
        fin.open(argv[i]);
        cout<<"The Contents of the file : "<<argv[i]<<endl;
        do
        {
            fin.get(ch);
            cout<<ch;
        } while (fin);
        fin.close();
        cout<<endl;
        
    }
    return 0;
}
 