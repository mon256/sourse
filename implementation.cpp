#include <iostream>
using namespace std;
  #define max 100
    int stack[max];
    int top=-1;
    bool isEmpty();
    bool isFull();
    int pop();
    void push(int value);
    int main(void);

bool isEmpty()
{
    if (top == -1)
        return true;
    return false;
}

bool isFull()
{
    if (top == max - 1)
        return true;
    return false;
}


int pop()
{
    if (isEmpty()) {
        cout << "Stack Underflow"<<endl;
       
    }
    return stack[top--];
}

void push(int value)
{
}

/* Stack's member method to insert
an element to it */
void push(int value)
{
    if (isFull()) {
        cout << "Stack Overflow" << endl;

    }
    else {

        top++;
        stack[top] = value;

    }

    class SpecialStack {
    public:
        int min;
        int pop();
        void push(int x);
        int getMin();

    };

    void SpecialStack::push(int value)
    {

        if (isEmpty() == true) {
            push(value);
            min.push(value);
        }
        else {
            Stack::push(value);
            int min value = min.pop();
            min.push(y);
        }
        if (value < y) {
            min(value);
        }
        else {
            min.push(y);
        }
    }



int SpecialStack::pop()
{
    int value = Stack::pop();
    min.pop();
    return value;
}

/* SpecialStack's member method to get
 minimum element from it. */
int SpecialStack::getMin()
{
    int x = min.pop();
    min.push(x);
    return x;
}

/* Driver program to test SpecialStack
 methods */
int main()
{
    SpecialStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.getMin() << endl;
    s.push(5);
    cout << s.getMin();
    return 0;
}