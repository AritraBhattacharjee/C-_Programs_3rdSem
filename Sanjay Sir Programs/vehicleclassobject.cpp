#include<iostream>
using namespace std;

	class vehicle
	{
		
		public:
		char type[20];
		int wheels;
		
		public:
		void gearchanging();
		static void speed()
		{
		 cout<<"The speed of the car depends on its mechanism"<<endl;
		}
	};
	
	void vehicle :: gearchanging()   //:: scope resolution operator
	{
		int gr;
		cout<<"enter the type of the car:";
		cin>>type;
		cout<< "the type of the car is:"<<type<<endl;
		cout << "How many gears are there:";
		cin>>gr;
		cout<< "the numberof gears of the car is:"<<gr<<endl;
		//speed(); //calling private function from the public function
	}

	
	int main()
	{
    /*vehicle car1;
    car1.wheels=4;  //4 Bytes
	cout <<"\n" << "The number of wheels in car1 is:"<<car1.wheels<<"\n";
	car1.gearchanging();
	vehicle::speed();
	
	vehicle car2;
	car2.wheels=6;
	cout <<"\n\n" << "The number of wheels in car2 is:"<<car2.wheels<<"\n";
	car2.gearchanging();
	
	vehicle truck;
	truck.wheels=10;
	cout <<"\n\n" << "The number of wheels in Truck is:"<<truck.wheels<<"\n";
	truck.gearchanging();
	//truck.speed();*/
	
	//array of objects
	cout<<"Array of objects"<<endl;
	const int size=3;
	vehicle car[size];
	
	for(int i=0;i<size;i++)
	{
		car[i].gearchanging();
	}
	
	return 0;	
	}
