#include <iostream>
using namespace std;

class student //single base class
{
	protected:
		int rollno;
 	public:
 	void getnumber(int a)
 	{
 	rollno=a;	
    }
    void putnumber()
    {
    	cout << "Roll Number= "<< rollno<<endl;
 	}
};
class test : virtual public student // derived class from base class
{
	protected:
		float part1,part2;
 	public:
 	void getmarks(float x,float y)
 	{
 	    part1=x;
 	    part2=y;
 	}
 	void putmarks(void)
 	{
 		cout<<"Marks obtained:"<<part1<<part2<<endl;
	 }
};

class sports : public virtual student   // derived from class derive1
{
 	protected:
		float score;
 	public:
 	void getscore(float s)
 	{
    	score=s;
 	}
 	void putscore()
 	{
 	    cout << "\nSports= " << score<<endl;
 	}
};

class result:public test,public sports
{
	float total;
	public:
		void display();
};

void result::display()
{
	total=part1+part2+score;
	putnumber();
	putmarks();
	putscore();
	cout<<"Total score of the student is:"<<total<<endl;
}
int main()
{
    result student1;      //object of derived class
    float m1,m2,m3,sc;
    cout<<"enter student1 number:";
    cin>>m1;
    cout<<"enter student1 two marks:";
    cin>>m2>>m3;
    cout<<"enter student1 score:";
	cin>>sc;
    student1.getnumber(m1);
    student1.getmarks(m2,m3);
    student1.getscore(sc);
    student1.display();
	return 0;
} 
