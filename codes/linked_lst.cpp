#include <bits/stdc++.h>

using namespace std;

struct node
{
  int data;
  struct node *next;
};

void display(node *head)
{
    node *temp;
    temp = new node;
    temp = head->next;
    while(temp!=NULL) {
        //cout<<temp->data<<" ";
        printf("%d ",temp->data);
        temp = temp->next;
    }

}

node* insert(node* head, int value)
{
    node* temp;
    temp = new node;
    ///scanf("%d", &temp->data);
    temp->data = value;
    temp->next = NULL;

    node *prev;
    prev = head;

    while(prev->next!=NULL) prev= prev->next;

    prev->next = temp;

    return head;
}


/// list 12 14 25 11 45

int main()
{
    struct node *head;
    head = new node;
    head->next = NULL;

    head = insert(head,12);
    head = insert(head,13);
    head = insert(head,14);
    head = insert(head,15);
    display(head);

}
