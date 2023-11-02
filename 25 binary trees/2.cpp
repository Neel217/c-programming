// forming tree from preorder and inorder
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

int search(int in[], int start, int end, int curr) {
    for(int i = start; i <= end; i++){
        if(in[i] == curr) return i;
    }
    return -1;
}

node* buildTree(int pre[],int in[], int start, int end) {
    static int idx = 0;
    if(start > end) return NULL;
    int curr = pre[idx];
    idx++;
    node* Node = new node(curr);
    if(start == end) return Node;
    int pos = search(in, start,end, curr);
    Node->left = buildTree(pre,in,start,pos-1);
    Node->right = buildTree(pre,in,pos+1,end);
    return Node;
}

void printTree(node* root){
    if(root == NULL) return;
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}

int main()
{
    IO();
    int pre[] = {1,2,4,3,5};
    int in[] = {4,2,1,5,3};
    // building tree
    node* root = buildTree(pre,in,0,4);
    printTree(root);
    return 0;
}
