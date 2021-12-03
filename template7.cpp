#include<iostream>
using namespace std;

template<class T>
class Stack
{
    private:
    int n;
    int top = -1;
    T *ptr;

    public:
    Stack()
    {
        cout<<"Enter the size of the stack : ";
        cin>>n;
        ptr = new T[n];
    }
    void push(T data)
    {
        if(top == n -1)
            cout<<"Stack Overflow"<<endl;
        else
        {
            top++;
            ptr[top] = data;
           
        }
    }
    T pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow";
            return -1;
        }
        else
        {   
            T x;
            x = ptr[top];
            top--;
            return x;
        }

        
    }

    void display()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow";
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout<<ptr[i]<<" ";
            }
            
        }
    }


};
int main()
{
    cout<<" Integer Stack "<<endl;
    Stack<int>s;
    s.push(74);
    s.push(80);
    s.push(51);
    s.push(41);

    cout<<"The stack is : ";
    s.display();

    cout<<endl<<"Popping the element "<<s.pop()<<" from the stack"<<endl;
    cout<<"The stack after poping is : ";
    s.display();
    cout<<endl;

    cout<<"Character stack "<<endl;
    Stack<char>ch;
    ch.push('a');
    ch.push('b');
    ch.push('c');
    ch.push('e');
    ch.push('f');
    
    cout<<"The stack is : ";
    ch.display();

    cout<<endl<<"Popping the element "<<ch.pop()<<" from the stack"<<endl;
    cout<<"The stack after poping is : ";
    ch.display();
    cout<<endl;

    return 0;
}