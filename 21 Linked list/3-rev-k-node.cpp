#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int val){ 
        data=val;
        next=NULL;
    }
};

void Iosteup() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void insertTail(node* &head, int val) {
    node* n = new node(val);
    if(head==NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void Print(node* head) {
    node* temp =head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}


node* reversek(node* head,int k) {
    node* prev=NULL;
    node* curr = head;
    node* nextp;
    int ct=0;

    while (curr != NULL && ct<k) 
    {
        nextp = curr->next;
        curr->next = prev;
        prev = curr; curr = nextp;
        ct++;
    }

    if(nextp != NULL) {
        head->next = reversek(nextp, k);
    }

    return prev;
    
}


int main()
{   
    Iosteup();
    int a;
    cin >> a;
    int k;
    node* n = NULL;
    for(int i=0; i<a;i++) {
        cin >> k;
        insertTail(n,k);
    }
    cout << "Entered data = ";
    int l = 2;
    node* Nhead = reversek(n,l);
    
    Print(Nhead);
    
    return 0;
}