#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int data;
    node *prev;
    node(int n) {
        this->data = n;
        this->prev = NULL;
    }
};

void multiply(node *tail,int n)
{
    node *temp = tail, *prevnode = tail;
    int carry = 0;
    while(temp!= NULL) {
        int data = temp->data * n + carry;
        temp->data = data % 10;
        carry = data/10;
        prevnode = temp;
        temp = temp->prev;
    }
    while(carry!=0) {
        prevnode->prev = new node((int)(carry%10));
        carry = carry / 10;
        prevnode = prevnode->prev;
    }
}

void print(node *tail)
{
    if(tail == NULL) return;
    print(tail->prev);
    cout<<tail->data;
}

int main()
{
    node *tail;
    tail = new node(1);
    int n;
    cin>>n;
    for(int i=2;i<=n;i++) multiply(tail,i);

    print(tail);
}
