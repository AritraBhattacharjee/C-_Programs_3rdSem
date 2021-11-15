#include<iostream>
using namespace std;

int var=10;  //global variable

	int main()
	{
    int var=20;   //local to main()
     
	  {
	  	int k=var;  //k=20
	  	int var=30;  //var is declared and local to the inner block
	  	
	  	cout<< "Inner block"<<endl;
	  	cout<<"k="<<k<<"\n";  //k=20
	  	cout<<"var="<<var<<"\n";  //var=30
	  	cout<<"::var="<<::var<<"\n";   //var=10
	  }
	  
	  cout<<"Outer block"<<"\n";  
	  cout<<"var="<<var<<"\n";  //var=20
	  cout<<"::var="<<::var<<"\n";  //var=10
	  
	   	return 0;	
	}
