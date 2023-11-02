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

void insertHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head=n;
}

bool search(node* &head, int key) {
    node* temp = head;
    while(temp->data == key) {
        return true;
    }
    temp = temp->next;
    return false;
}

void delhead(node* &head) {
    node* todel = head;
    head = head->next;
    delete todel;
}


void Delete(node* &head, int val) {
    if(head == NULL) return;
    if(head->next == NULL) {
        delhead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!= val) {
        temp = temp->next;
    }
    node* todel = temp->next;
    temp->next = temp->next->next;
    delete todel;
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
    int a;
    cin >> a;
    int k;
    node* n = NULL;
    for(int i=0; i<a;i++) {
        cin >> k;
        insertTail(n,k);
    }
    cout << "Entered data = ";
    Delete(n,4);
    Print(n);
    
    return 0;
}