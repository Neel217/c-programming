// mergeing two sorted linked list
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

node* merge(node* head1, node* head2){
    node* p1 = head1;
    node* p2 = head2;
    node* dummy = new node(-1);
    node* p3 = dummy;

    while(p1!=NULL && p2!= NULL){
        if(p1->data < p2->data) {
            p3->next = p1;
            p1 = p1->next;
        } else {
            p3->next=p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while(p1!= NULL) {
        p3->next = p1;
        p1 = p1->next;
        p3=p3->next;
    }
    while(p2!= NULL) {
        p3->next = p2;
        p2 = p2->next;
        p3=p3->next;
    }

    return dummy->next;
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
    int a,b;
    cin >> a >> b;
    int k,l;
    node* head1 = NULL;
    node* head2 = NULL;
    for(int i=0; i<a;i++) {
        cin >> k;
        insertTail(head1,k);
    }
    for(int i=0; i<b; i++) {
        cin >> l;
        insertTail(head2,l);
    }
    cout << "Entered data = ";
    node* newH = merge(head1,head2);
    Print(newH);

    
    return 0;
}