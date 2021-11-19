#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outf("MYDetails"); // output stream -> writing into the file

	cout<<"Enter your name: ";
	char name[30];
	cin>>name;

	outf<<name<<endl;

	cout<<"Enter  your city : ";
	char city[10];
	cin>>city;

	outf<<city<<endl;
 
	outf.close();

	return 0;
}
