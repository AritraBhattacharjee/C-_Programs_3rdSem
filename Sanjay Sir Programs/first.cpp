#include<iostream>
using namespace std;

	class employee
	{
		private:
		int age;
		char name[20];
		char desig[10];
		
		public:
		void getdata();
		void displaydata();
	};
	
	void employee :: getdata()
	{
		cout << "Enter the age of employee1:";
		cin >> age;
		cout << "Enter the name of employee1:";
		cin >> name;
		cout << "Enter the designation of employee1:";
		cin >> desig;
	}
	
	void employee :: displaydata()
	{
		cout << "\nthe age of employee1 is:";
		cout << age;
		cout << "\nthe name of employee1 is:";
		cout << name;
		cout << "\nthe designation of employee1 is:";
		cout << desig;
	}
	
	int main()
	{
	employee emp;  //memory heap
	emp.getdata();
	emp.displaydata();
	return 0;	
	}
