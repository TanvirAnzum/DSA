#include <iostream>
using namespace std;

struct node {
    int value;
    node *previousNode;
    node *nextNode;
};

node* insertNode(node *prev) {
    node *temp;
    temp = new node;
    cin>>temp->value;
    prev->nextNode = temp;
    temp->previousNode = prev;
    temp->nextNode = NULL;

    return temp;
}

void displayForward(node* head) {
    node *temp;
    temp = head->nextNode;
    cout<<"Forword"<<endl;
    while(temp!=NULL) {
        cout<<temp->value<<" ";
        temp = temp->nextNode;
    }
}

void displayBackword(node *tail) {
    cout<<"Backword"<<endl;
    while(tail->previousNode !=NULL) {
        cout<<tail->value<<" ";
        tail = tail->previousNode;
    }
}

int main()
{
    node *head,*prev;
    head = new node;
    prev = new node;
    head->previousNode = NULL;
    head->nextNode = NULL;
    prev = head;

    int item = 5;
    while(item--) {
        prev = insertNode(prev);
    }
    displayForward(head);

    displayBackword(prev);
}
