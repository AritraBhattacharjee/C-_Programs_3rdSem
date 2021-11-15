//Working with multiple files and creating files with open() function

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("country");
	
	fout<<"USA"<<endl;
	fout<<"UK\n";
	fout<<"India\n";
	
	fout.close();
	
	fout.open("capital");
	
	fout<<"Washington\n";
	fout<<"London\n";
	fout<<"Newe Delhi\n";
	fout.close();
	
	//Reading the files
	const int N=80;
	char line[N];
	
	ifstream fin;
	fin.open("Country");
	
	cout<<"contents of country file"<<endl;
	
	while(fin)
	{
		fin.getline(line,N);
		cout<<line;
	}
	fin.close();
	
	fin.open("capital");
	
	cout<<"\n contents of capital file\n";
	
	while(fin)
	{
		fin.getline(line,N);
		cout<<line;
	}
	fin.close();
	
	return 0;
}
