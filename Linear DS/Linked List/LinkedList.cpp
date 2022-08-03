#include <iostream>

using namespace std;

struct node
{
    int value;
    node* next;
};

node* insertNode(node *prev)
{
    node *temp;
    temp = new node;
    cin>>temp->value;
    temp->next = NULL;
    prev->next = temp;
    return temp;
}

node* insertBefore(node *head,int key)
{
    cout<<endl<<"Insert Before "<<key<<" :";
    node *temp;
    temp = head->next;
    while(temp->next->value != key)
    {
        temp = temp->next;
    }
    node *newNode;
    newNode = new node;
    cin>>newNode->value;
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

void displayNode(node *head)
{
    node *temp;
    temp = head->next;
    cout<<"Printing List"<<endl;
    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}

bool searchNode(node *head,int key)
{
    node *temp;
    temp= head->next;
    while(temp!=NULL)
    {
        if(temp->value == key) return true;
        temp = temp->next;
    }
    return false;
}

node* insertAfter(node *head, int key)
{
    cout<<endl<<"Insert After "<<key<<" :";
    node *temp;
    temp = head->next;
    while(temp->value != key)
    {
        temp = temp->next;
    }
    node *newNode;
    newNode = new node;
    cin>>newNode->value;
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

node* deleteNode(node *head,int key)
{
    node *temp;
    temp = head->next;
    if(temp->value == key) {
        head->next = temp->next;
        return head;
    }
    while(temp->next->value != key) temp = temp->next;
    node *deletedNode;
    deletedNode = temp->next;
    temp->next = deletedNode->next;
    deletedNode->next = NULL;

    return head;
}


int main()
{
    node *head, *prev;
    prev = new node;
    head = new node;
    head->next = NULL;
    prev = head;
    int val = 5;
    while(val--) prev = insertNode(prev);
    displayNode(head);
    cout<<searchNode(head, 4);


    head = insertAfter(head, 3);
    displayNode(head);

    head = insertBefore(head, 2);
    displayNode(head);


    head = deleteNode(head, 3);
    displayNode(head);


    return 0;
}
