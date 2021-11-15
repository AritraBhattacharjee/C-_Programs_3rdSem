#include <iostream>
 
using namespace std;

int count=0;

class countable
{
	public:
		countable()
		{
			count++;
			cout<<"\nNumber of objects created"<<endl;
		}
		~countable()
		{
			cout<<"\nNumber of objects destroyed"<<endl;
			count--;
		}
};

// Main function for the program
int main() {
   countable A1,A2,A3,A4;  //default constructor call
   
   return 0;
}
