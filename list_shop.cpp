#include<iostream>
using namespace std;

class list
{
    int code;
    
    public:
    float price;
    void read();
    void print();
};

void list::read()
{
    cout<<"Enter the code: ";
    cin>>code;
    cout<<"Enter the price: ";
    cin>>price;
}
void list::print()
{
    cout<<"The code: "<<code<<endl;
    cout<<"The price: "<<price<<endl;
    cout<<endl;
}
int main()
{
    int n,option,pos,i;
    cout<<"Enter the number of elements: ";
    cin>>n;
    list l[n];
    cout<<"Enter the elements: "<<endl;
    for(i = 0; i< n;i++)
    l[i].read();
    cout<<"Press 1 for adding to the list, 2 for deleting from the list, \n3 for calculating total value: "<<endl;
    cin>>option;
    switch(option)
    {
        case 1:
            {
                cout<<"Enter the element to be entered\n";
                l[n++].read();   
                 printf("The array after the insertion \n");
                for ( i = 0; i < n; i++)
                l[i].print();
            }
            break;
        case 2:
            {
                cout<<"Enter the position in list to delete\n";
                cin>>pos;
                for (i = pos; i < n - 1; i++)
                l[i] = l[i + 1];
                n--;
                cout<<"The list after the deletion \n";
                for (i = 0; i < n; i++)
                l[i].print();
            }
            break;
        case 3:
            {
                int sum = 0;
                for(i = 0; i< n;i++)
                {
                    sum += l[i].price;
                }
                cout<<"The total cost will be : Rs."<<sum<<endl;
            }
            break;
        default:
            cout<<"Wrong Option"<<endl;
            break;
    }


    return 0;
}