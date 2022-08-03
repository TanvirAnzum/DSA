#include <iostream>

using namespace std;

struct node
{
    int value;
    node* next;
};

node createNode(node *start)
{
    node prev,temp;
    prev = *start;
    cout<<"enter value";
    int input;
    cin>>input;
    while(prev.next!=NULL) {
        prev = prev.next;
    }
    temp.next = NULL;
    temp.value = input;
    prev.next = temp;

    return start;
}

void displayList(node *start)
{
    node temp;
    temp = start.next;
    cout<<"Displaying value"<<endl;
    while(temp!=NULL)
    {
        cout<<temp.value<<" ";
    }
}

int main()
{
    node* start;
    start.next = NULL;
    while(1) {
        start = createNode(start);
        displayList(start);
    }
    return 0;
}
