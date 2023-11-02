#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;
    node (int val) {
        data = val;
        next=NULL;
        prev=NULL;
    }
};

void insertHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    if(head!= NULL){
        head->prev = n;
    }
    head=n;
}

void insertTail(node* &head, int val) {
    if (head == NULL){
        insertHead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp =head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

void Print(node* head) {
    node* temp =head;
    while(temp != NULL) {
        cout << "["<<temp->data << "]" << " ";
        temp = temp->next;
    } cout << endl;
}

int main()
{
    IO();
    int a;
    cin >> a;
    int k;
    node* n = NULL;
    for(int i=0; i<a;i++) {
        cin >> k;
        insertTail(n,k);
    }
    return 0;
}