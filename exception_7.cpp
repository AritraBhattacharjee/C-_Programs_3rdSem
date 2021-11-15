/*Write a C++ Programs that prompts the user to enter a length in feet and inches and outputs the equivalent length in centimeters. If the user enters a negative number or a non-digit number, throw and handle an appropriate exception and prompt the user to enter another set of numbers.*/

#include<iostream>
using namespace std;

int main()
{

    double f,i;
    
    do
    {
        cout<<"Enter length in feets and inches : ";
        cin>>f>>i;
        double inches = 12*f+i;
        double centimeter;
        try
        {
            if(inches >=0)
            {
                centimeter = 2.54 * inches;
                cout<<endl<<" The "<<inches<<" inches = "<<centimeter<<" cms"<<endl;
            }
            else
            {
                throw inches;
            }
        }
        catch(...)
        {
            cout<<endl<<"Exception caught. Please try again."<<endl;

        }
            
        
    } while (f!=0 && i!=0);
    


    return 0;
}