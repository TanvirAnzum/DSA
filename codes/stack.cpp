#include <bits/stdc++.h>

using namespace std;

#define MAX 1000


class Stack
{
    int top;
public:
    int arr[MAX];
    Stack() {top = -1;}
    bool push(int x);
    int pop();
    int peek();
    bool isempty();
};


bool Stack::push(int x)
{
    if(top >= MAX - 1) {
        cout<<"Overflow"<<endl;
        return false;
    }
    else {
        arr[++top] = x;
        cout<<"pushed into stack"<<endl;
        return true;
    }
}

int Stack::pop()
{
    if(top < 0) {
        cout<<"Underflow"<<endl;
        return 0;
    }
    else {
        int x = arr[top--];
        return x;
    }
}

int Stack::peek()
{
    if(top<0) {
        cout<<"Stack is empty"<<endl;
    }
    else {
        return arr[top];
    }
}

bool Stack::isempty()
{
    return (top<0);
}


int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    while(!st.isempty()) {
        cout<<st.peek()<<endl;
        st.pop();
    }
    return 0;
}
