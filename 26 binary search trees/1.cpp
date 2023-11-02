// implementation
#include<bits/stdc++.h>
using namespace std;

#define nk '\n'
#define rep(i,a,b) for(int i = a; i<b; i++)

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

// Tree structure
struct Node{
    int data;
    Node* left; 
    Node* right;
    Node(int val) {
        data = val;
        left=NULL;
        right=NULL;
    }
};

// Insert BST
Node* insertBST(Node *root, int val) {
    if(root==NULL) {
        return new Node(val);
    }
    if(val < root->data) {
        root->left = insertBST(root->left,val);
    } else {
        root->right = insertBST(root->right,val);
    }
    return root;
}

// print preorder (gives sorted order)
void inorder (Node* root) {
    if(root==NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    IO();
    // Tree 1
    Node* root = NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    
    // Function
    inorder(root);
    return 0;
}