#include<iostream>
#include<string>
using namespace std;
class company{
    public:
    company(){}
    company(string brand1, int model1, int year1)
    {
        string b =brand1; 
        int m = model1;
        int year = year1;
        cout<<"The Entered data : "<<endl;
        cout<<"Brand Name: "<<brand1<<endl;
        cout<<"Model number: "<<model1<<endl;
        cout<<"Year : "<<year1<<endl;
    }
};

int main()
{
    string brand;
    int model;
    int year;
    cout<<"Enter the brand: ";
    cin>>brand;
    cout<<"Enter the model number : ";
    cin>>model;
    cout<<"Enter the year : ";
    cin>>year;
    company c1(brand,model,year);
    return 0;
}
