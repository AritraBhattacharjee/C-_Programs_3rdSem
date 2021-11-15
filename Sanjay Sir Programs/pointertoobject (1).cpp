#include <iostream>
using namespace std;

class item
{
	int code;
	float price;
	public:
		void getdata(int a, float b)
		{
			code=a;
			price=b;
		}
		void show()
		{
			cout<<"Code is:"<<code<<endl;
			cout<<"Price is:"<<price<<endl;
		}
};

int main()
{
 	 item x;
 	 item *ptr=&x;   //item *ptr=new item;   //use of new operator
 	 //x.getdata(100,85.90);
 	 //x.show();
 	 
 	 ptr->getdata(100,85.90); 
 	 ptr->show();                  //(*ptr).show()
 	 
 	 /*item *ptr=new item[2];
 	 for(i=0;i<2;i++)
 	 p->getdata(10,75.90);*/
 	 return 0;
}  
