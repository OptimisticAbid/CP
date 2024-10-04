#include <iostream>
using namespace std;

class stackImp
{
    int st[10];
    int top = -1;

public:
    int push(int x)
    {
        top = top + 1;
        st[top] = x;
        return x;
    }
    int pop(int y)
    {
        top = top - 1;
        return 0;
    }
    int peek()
    {
        return (st[top]);
    }
};

int main()
{
    stackImp stack;
    cout << "The element added is " << stack.push(10) << endl;
    stack.push(5);
    stack.push(15);
    stack.push(20);
    cout << stack.peek() << endl;
    stack.pop(20);
    cout << stack.peek();

    return 0;
}