#include <iostream>
using namespace std;

class MEAN
{
    int n1, n2;

public:
    void getdata()
    {
        cout << "Enter num1: ";
        cin >> n1;
        cout << "Enter num2: ";
        cin >> n2;
    }
    friend float ans(MEAN m);
};

float ans(MEAN m)
{
    return float(m.n1 + m.n2) / 2;
}

int main()
{
    MEAN m1;
    m1.getdata();
    cout << "Answer is: " << ans(m1);
    return 0;
}
