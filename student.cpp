#include<iostream>

using namespace std;

class student
{
    char name[20];
    int roll;
    char grade;
    public:
    void readData();
    void displayData();

};
void student::readData()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter Roll Number: ";
    cin>>roll;
    cout<<"Enter Grade: ";
    cin>>grade;
}
void student :: displayData()
{
    cout<<"Entered Name: "<<name<<endl;
    cout<<"Entered Roll Number: "<<roll<<endl;
    cout<<"Entered Grade: "<<grade<<endl;
    cout<<endl;
}

int main()
{
    int i,n;
    cout<<"Enter the Number of students: ";
    cin>>n;
    student st[n];
    for(i=0;i<n;i++)
    st[i].readData();
    cout<<"Entered Data: "<<endl;
    for(i=0;i<n;i++)
    st[i].displayData();

    return 0;
}