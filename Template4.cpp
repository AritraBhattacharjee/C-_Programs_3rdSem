#include<iostream>
using namespace std;
template<class T1, class T2>
class test
{
    private:
        T1 a;
        T2 b;
    public:
        test(T1 x, T2 y)
        {
            a= x;
            b = y;
        }
        void show()
        {
            cout<<"Different values from same template class : "<<a<<"  and   "<<b;
        }
};
int main()
{
    test<int, char>a(4,'c');

    a.show();

    return 0;
}
