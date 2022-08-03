#include <iostream>
using namespace std;

#define max 1000

class stack {
    int top;
public:
    int arr[max];
    stack() {
        top = -1;
    }
    int pop();
    int peek();
    bool push(int val);
    bool isEmpty();
};

bool stack::push(int val) {
    if(top >= max - 1) {
        cout<<"Overflow"<<endl;
        return false;
    }
    else {
        top++;
        arr[top] = val;
        cout<<val<<" is added to stack"<<endl;
        return true;
    }
}

int stack::pop() {
    if(top<0) {
        cout<<"Underflow"<<endl;
        return 0;
    }
    else {
        return arr[top--];
    }
}

int stack::peek() {
    if(top<0) {
        cout<<"Array is empty"<<endl;
        return -1;
    }
    else return arr[top];
}

bool stack::isEmpty() {
    return (top<0);
}

int main()
{
    stack newStack;
    newStack.push(1);
    newStack.push(2);
    newStack.push(3);
    cout<<newStack.isEmpty()<<endl;
    cout<<newStack.pop()<<endl;
    cout<<newStack.peek()<<endl;

    return 0;
}
