#include <iostream>
using namespace std;

class stackImp
{
    int st[10];
    int top = -1;

public:
    bool push(int x)
    {
        if (top >= 9)
        {
            cout << "Stack overflow! Cannot push " << x << endl;
            return false;
        }
        top++;
        st[top] = x;
        return true;
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack underflow! Cannot pop" << endl;
            return -1;
        }
        int popped = st[top];
        top--;
        return popped;
    }
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return (st[top]);
    }
};

int main()
{
    stackImp stack;
    cout << "The elements added are " << endl;
    cout << stack.push(10) << endl;
    cout << stack.push(5) << endl;
    cout << stack.push(15) << endl;
    cout << stack.push(20) << endl;
    cout << "The top element is " << stack.peek() << endl;
    stack.pop();
    cout << stack.peek();

    return 0;
}