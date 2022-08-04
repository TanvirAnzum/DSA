#include <bits/stdc++.h>

using namespace std;

struct bst
{
    int root;
    struct bst* left;
    struct bst* right;

    bst(int n)
    {
        root = n;
        left = NULL;
        right = NULL;
    }
};

struct bst* insert(struct bst* node,int data)
{
    if(node == NULL)
    {
        return new bst(data);
    }

    if(data> node->root) {
        node->right = insert(node->right,data);
    }
    else {
        node->left = insert(node->left,data);
    }

    return node;
}

void inorder(struct bst* node)
{
    if(node == NULL) return;
    inorder(node->left);
    cout<<node->root<<" ";
    inorder(node->right);
}

int main()
{
    struct bst* node = NULL;
    node = insert(node, 5);
    insert(node,6);
    insert(node,7);
    insert(node,9);
    insert(node,3);
    insert(node,2);
    insert(node,4);
    insert(node,1);

    inorder(node);
}
