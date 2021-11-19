
#include<iostream>
#include<fstream>
using namespace std;

int main()
{

	ifstream inf;
	inf.open("MYDetails");
	char name[30];
	char city[30];
	inf>>name;
	inf>>city;

	cout<<"\n";
	cout<<"Name:"<<name<<endl;
	cout<<"City:"<<city<<endl;

	inf.close();

 
	return 0;
}
