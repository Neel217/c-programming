//circular linked list
#include<iostream>
#include <string>

#define x "\n"
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


void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

void inserthead(node* &head, int val) {
    node* n = new node(val);
    if(head == NULL) {
        n->next=n;
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next=head;
    head=n;
}

void insertTail(node* &head, int val) {
    if(head==NULL) {
        inserthead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void Print(node* head) {
    node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);
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
    cout << "Entered data = ";
    Print(n);
    cout << x;
    inserthead(n,5);
    Print(n);
}