// code
#include<bits/stdc++.h>
using namespace std;

#define nk '\n'

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val) {
        data = val;
        left=NULL;
        right=NULL;
    }
};

void preorder(struct node* root) {
    if(root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void in_order(struct node* root) {
    if(root == NULL) return;
    in_order(root->left);
    cout << root->data << " ";
    in_order(root->right);
}

void postorder(struct node* root) {
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    IO();
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    preorder(root);
    cout << nk;
    in_order(root);
    cout << nk;
    postorder(root);
    return 0;
}