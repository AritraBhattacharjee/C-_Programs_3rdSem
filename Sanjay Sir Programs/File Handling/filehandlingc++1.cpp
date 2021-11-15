//Working with single file and creating files with constructor function

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outf("ITEM");
	
	cout<<"Enter the name:";
	char name[30];
	cin>>name;
	
	outf<<name<<endl;
	
	cout<<"Enter item cost";
	float cost;
	cin>>cost;
	
	outf<<cost<<endl;
	
	outf.close();
	
	ifstream inf("ITEM");
	
	inf>>name;
	inf>>cost;
	
	cout<<"\n";
	cout<<"Item Name:"<<name<<endl;
	cout<<"Item Cost:"<<cost<<endl;
	
	inf.close();
	
	return 0;
}
