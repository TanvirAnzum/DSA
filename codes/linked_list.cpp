#include <bits/stdc++.h>

using namespace std;

struct node
{
    int value;
    struct node *next;
};

void display(node *start)
{
    node *temp;
    temp = start->next;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

node* insert(node *prev)
{
    node *temp;
    temp = new node;
    cout<<"Enter a value: ";
    cin>>temp->value;   /// taking the value in the temporary node
    temp->next = NULL;
    prev->next = temp;
    return temp;
}

void del(node *start)
{
    node *temp,*previous;
    cout<<"Insert value that will be deleted: ";
    int key;
    cin>>key;
    temp = start->next;
    while(temp!=NULL)
    {
        /// if the position of the value is first
        if(temp->value == key)
        {
            previous = start;
            break;
        }

        if(temp->next->value == key)
        {
            previous = temp;     /// previous is the previous value of target value
            temp = temp->next;   /// now temp is the target value
            break;
        }
        temp = temp->next;
    }

    previous->next = temp->next;
    free(temp);

}

void insert_pos(node *start)
{
    node *new_val;
    new_val = new node;
    display(start);
    cout<<"Insert value before(pick a value from current list): ";
    int key;
    cin>>key;
    cout<<"Insert new value: ";
    cin>>new_val->value;

    ///finding the position

    node *previous, *temp;
    temp = start->next;
    while(temp!=NULL)
    {
        /// if the position of the value is first
        if(temp->value == key)
        {
            previous = start;
            break;
        }


        if(temp->next->value == key)
        {
            previous = temp;
            break;
        }
        temp = temp->next;
    }

    new_val->next = previous->next;
    previous->next = new_val;

}



int main()
{
    struct node *start, *prev;
    start = new node;
    prev = new node;
    start->next = NULL;
    prev = start;  /// initially previous is the head
    while(1)
    {
        ///operations
        cout<<"Operations: "<<endl;
        cout<<"1: Current List"<<endl;
        cout<<"2: Insert Normally"<<endl;
        cout<<"3: Insert into a certain position"<<endl;
        cout<<"4: Delete"<<endl;
        int choice;
        cin>>choice;
        switch (choice)
        {
        case 1:
            display(start);
            break;
        case 2:
            prev = insert(prev);
            break;
        case 3:
            insert_pos(start);
            break;
        case 4:
            del(start);
            break;
        default:
            cout<<"Wrong Keyword! Type Again!"<<endl;
        }
    }


}
