#include<iostream>
 
using namespace std;

int main()
{
	int size=20;
	char city[20];
	
	cout<<"ENTER CITY NAME:\n";
	cin>>city;
	cout<<"CITY NAME IS:"<<city<<endl;
		
	cout<<"ENTER CITY NAME AGAIN:\n";
	cin.getline(city,size);
	cout<<"CITY NAME NOW IS:"<<city<<endl;
	
	cout<<"ENTER ANOTHER CITY NAME:\n";
	cin.getline(city,size);
	cout<<"NEW CITY NAME IS:"<<city<<endl;
	
	return 0;
}
