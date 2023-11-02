// code
#include<bits/stdc++.h>
using namespace std;

#define nk '\n'

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

// Tree structure
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

// level order travesal
void lvl_transversal(node* root) {
    if (root== NULL) {
        return;
    }
    queue<node* > q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* Node = q.front();
        q.pop();
        if(Node != NULL){
            cout << Node->data << " ";
            if(Node->left){
                q.push(Node->left);
            }
            if(Node->right) {
                q.push(Node->right);
            }
        } else if(!q.empty()) {
            q.push(NULL);
        }
    }
}

// Sum at kth Node
int SumatK(node* root, int k) {
    if(root == NULL) {
        return -1;
    }
    queue<node* > q;
    q.push(root);
    q.push(NULL);
    int lvl=0,sum=0;
    while(!q.empty()){
        node* Node = q.front();
        q.pop();
        if(Node != NULL){
            if(lvl == k) {
                sum+=Node->data;
            }
            if(Node->left){
                q.push(Node->left);
            }
            if(Node->right) {
                q.push(Node->right);
            }
        } else if(!q.empty()) {
            q.push(NULL);
            lvl++;
        }
    }
    return sum;
}

// count the number of node
int countN (node* root){
    if(root == NULL) {
        return 0;
    }
    return countN(root->left) + countN(root->right) + 1;
}

// sum of all nodes
int sumNode(node* root) {
    if(root == NULL) {
        return 0;
    }
    return sumNode(root->left) + sumNode(root->right) + root->data;
}

// calculate the height
int calcH(node* root){
    if(root==NULL){
        return 0;
    }
    int rh = calcH(root->right);
    int lh = calcH(root->left);
    return max(rh,lh) + 1;
}

// calculate the diameter
int Diameter(node* root, int* height) {
    if(root==NULL){
        *height = 0;
        return 0;
    }
    int lh=0,rh=0;
    int ld = Diameter(root->left, &lh);
    int rd = Diameter(root->right, &rh);
    int cd = lh + rh + 1;
    *height = max(lh,rh) + 1;

    return max(cd,max(ld,rd));
}

// replacing sum
void sum_replacement(node* root){
    if(root==NULL){
        return;
    }
    sum_replacement(root->left);
    sum_replacement(root->right);
    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
}

// checks tree balanced or not
void balance_bt(node* root) {
    if(root==NULL){
        return;
    }
    int rh = calcH(root->right);
    int lh = calcH(root->left);
    if(abs(lh-rh) <= 1) {
        cout << "tree balanced" << nk;
    } else {
        cout << "tree unbalanced" << nk;
    }
}

// print in preorder
void preorder(node* root) {
    if(root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);  
    preorder(root->right);
}

// distance b/w 2 nodes
node* LCA(node *root , int n1 ,  int n2)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data == n1 || root->data ==n2)
    {
        return root;
    }
    node* left = LCA(root->left,n1,n2);
    node* right = LCA(root->right , n1 ,n2);

    if(left!= NULL && right!= NULL)
    {
        return root;
    }

    if(left == NULL && right ==NULL)
    {
        return NULL;
    }
    if(left!=NULL )
    {
        return LCA(root->left , n1 ,n2);
    }
    return LCA(root->right,n1,n2);
}

int findDist(node*root , int k , int dist)
{
    if(root == NULL)
    {
        return -1;
    }
    if(root->data == k)
    {
        return dist;
    }
    int left = findDist(root->left , k ,dist +1);
    if(left != -1)
    {
        return left;
    }
        
    return findDist(root->right,k, dist+1);
}

int distBtwNodes(node *root , int n1 , int n2)
{
    node *lca = LCA(root, n1 ,n2);

    int d1 = findDist(lca , n1, 0);
    int d2 = findDist(lca , n2 , 0);

    return d1+d2;
}

// Maximum Sum path in BT

int maxPathAumUtil(node *root, int &ans){
    if(root == NULL){
        return 0;
    }
    
    int left = maxPathAumUtil(root -> left, ans);
    int right= maxPathAumUtil(root -> right, ans);

    int nodeMax = max(max(root->data, root->data + left + right),
                  max(root->data+ left, root->data + right));
    ans = max(ans, nodeMax);
                  
    int singlePathsum = max(root->data, max(root->data + left, root -> data + right));
    return singlePathsum;
}

int MaxBT(node *root){
    
    int ans = INT_MIN;
    maxPathAumUtil(root, ans);
    return ans;
}

int main()
{
    IO();
    int height = 0;

    // Tree 1
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(8);

    // Tree 2
    struct node* root2 = new node(1);
    root2->left = new node(2);
    root2->left->left = new node(3);

    // Tree 3
    struct node* root3 = new node(1);
    root3->left = new node(-12);
    root3->right= new node(3);
    root3->left->left = new node(4);
    root3->right->left = new node(5);
    root3->right->right = new node(-6);

    // Functions
    cout << countN(root) << endl;
    cout << sumNode(root) << endl;
    cout << calcH(root) << endl;
    cout << Diameter(root,&height) << endl;
    preorder(root);
    cout << nk;
    sum_replacement(root);
    preorder(root);
    cout << nk;
    balance_bt(root);
    balance_bt(root2);
    cout<<distBtwNodes(root , 4 ,5)<<endl;
    cout << MaxBT(root3) << endl;
    return 0;
}