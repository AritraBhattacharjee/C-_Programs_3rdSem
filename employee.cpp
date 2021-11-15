#include<iostream>

using namespace std;

class student
{
    private:
    char empName[20];
    int empNum;
    float basicPay,dailyAllowance,incomeTax;
    public:
    float netSalary;
    void readData();
    void displayData();
};
void student::readData()
{
    cout<<"Enter Employee name: ";
    cin>>empName;
    cout<<"Enter Employee Number: ";
    cin>>empNum;
    cout<<"Enter Basic Pay: ";
    cin>>basicPay;
    cout<<"Enter Daily Allowance: ";
    cin>>dailyAllowance;
    cout<<"Enter Income Tax: ";
    cin>>incomeTax;
}
void student :: displayData()
{
    cout<<"Entered Employee Name: "<<empName<<endl;
    cout<<"Entered Employee Number: "<<empNum<<endl;
    cout<<"Entered Basic Pay: "<<basicPay<<endl;
    cout<<"Enter Daily Allowance: "<<dailyAllowance<<endl;
    cout<<"Enter Income Tax: "<<incomeTax<<endl;
    
}

int main()
{
    int i,n;
    cout<<"Enter the Number of Employees: ";
    cin>>n;
    student st[n];

    for(i=0;i<n;i++)
    {
        st[i].readData();
        cout<<"Enter the net salary: ";
        cin>>st[i].netSalary;
    }
   
    cout<<"Entered Data: "<<endl;
    for(i=0;i<n;i++)
    {
        st[i].displayData();
        cout<<"The net salary is : "<<st[i].netSalary<<endl<<endl;
    }
    return 0;
}