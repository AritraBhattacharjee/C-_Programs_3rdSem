

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//writing of 1st file
	ofstream outf;
	outf.open("MYList");
	cout << "Enter your name: ";
	char name[30];
	cin >> name;

	outf << name << endl;

	cout << "Enter  your city : ";
	char city[10];
	cin >> city;

	outf << city << endl;

	outf.close();

	//writing in second file
	//ofstream outf;
	outf.open("MYList2");
	cout << "Enter your name: ";
	char name1[30];
	cin >> name1;

	outf << name1 << endl;

	cout << "Enter  your city : ";
	char city1[10];
	cin >> city1;

	outf << city1 << endl;

	outf.close();

	//reading from 1st file

	ifstream inf;
	inf.open("MYList");
	char name2[30];
	char city2[30];
	inf >> name2;
	inf >> city2;

	cout << "\n";
	cout << "Name:" << name2 << endl;
	cout << "City:" << city2 << endl;

	//reading from 2nd file
	//ifstream inf;
	inf.open("MYList2");
	char name3[30];
	char city3[30];
	inf >> name3;
	inf >> city3;

	cout << "\n";

	cout << "Name:" << name3 << endl;
	cout << "City:" << city3 << endl;
	return 0;
}
