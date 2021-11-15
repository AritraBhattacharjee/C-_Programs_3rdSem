#include<iostream>
using namespace std;

class factorial
{
    int n;
    int fact;

    public:
    void getData();
    void displayFact();
};

inline void factorial :: getData()
{
    cout<<"Enter the number to get its factorial: ";
    cin>>n;
}

inline void factorial ::displayFact()
{
    fact =  1;
    for(int i =1;i<=n;i++)
    fact = fact*i;
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
}

int main()
{
    factorial f;
    f.getData();
    f.displayFact();
    return 0;
}