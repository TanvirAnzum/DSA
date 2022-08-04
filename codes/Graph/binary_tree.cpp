#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;

    node(int n)
    {
        data = n;
        left = NULL;
        right = NULL;
    }
};

void inorder(struct node* node)
{
    if(node == NULL) return;

    inorder(node->left);

    cout<<node->data<<" ";

    inorder(node->right);
}

void preorder(struct node* node)
{
    if(node == NULL) return;

    cout<<node->data<<" ";

    preorder(node->left);

    preorder(node->right);
}

void postorder(struct node* node)
{
    if(node == NULL) return;

    postorder(node->left);

    postorder(node->right);

    cout<<node->data<<" ";
}

int sum(struct node* node)
{
    static int s = 0;
    if(node == NULL) return s;

    s = s + node->data;

    sum(node->left);
    sum(node->right);
}


int main()
{
    struct node* tree = new node(1);
    tree->left = new node(2);
    tree->right = new node(3);
    tree->left->left = new node(4);
    tree->left->right = new node(5);
    tree->right->left = new node(6);
    tree->right->right = new node(7);
    inorder(tree);
    cout<<endl;
    preorder(tree);
    cout<<endl;
    postorder(tree);
    cout<<endl;
    cout<<sum(tree);
}
