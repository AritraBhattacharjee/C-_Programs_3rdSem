#include<iostream>
using namespace std;

class student1
{  

private:
int age,weight; 
void show()
{
	cout<<"This is private function"<<endl;
}

public:
void getdata()
{
cout<<"This is public function"<<endl;	
show();
/*char n1[20];
cout<<"Enter name of student1: ";  
cin>>n1;  
age=23;
weight=65;
cout<<"The name of student1 is:"<<n1<<endl;
cout<<"The age and weight of student1 is:"<<age<<weight<<endl;
float avg=(age+weight)/2.0;
cout<<"The average of student1 is:"<<avg;*/
}
};

int main()
{
student1 st;
st.getdata();



//st.show();
//student2 st2;
//st2.getdata(25,70);


return 0;
}
/*class student2
{  
int age,weight; 

public:
void getdata(int a,int w)
{
char n2[20];
cout<<"Enter name of student2:"<<endl;  
cin>>n2;
age=a;
weight=w;
cout<<"The age and weight of student2 is:"<<age<<weight<<endl;
}
};*/


Write a C++ program to calculate the area and perimeter of four geometrical objects. Such as, 
square,circle,rectangle and triangle. You have to create individual classes of all these four objects.
And the input lenghts must be private in nature. You must use a friend function concept to calculate
the area of any one of the object.



