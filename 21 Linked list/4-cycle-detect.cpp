#include<iostream>
using namespace std;

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

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

void make_cyc(node* &head, int pos) {
    node* temp = head;
    node* st;

    int ct=1;
    while(temp->next!=NULL) {
        if(ct == pos) {
            st = temp;
        }
        temp = temp->next;
        ct++;
    }
    temp->next = st;
}

bool detect_Cyc(node* &head) {
    node* s = head;
    node* f = head;
    while(f!=NULL && f->next != NULL ) {
        s = s->next;
        f = f->next->next;
        if(f==s) {
            return true;
        }
    }
    return false;
}

void Print(node* head) {
    node* temp =head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}



int main()
{
    IO();
    int ct=0;
    int a;
    cin >> a;
    int k;
    node* n = NULL;
    for(int i=0; i<a;i++) {
        cin >> k;
        insertTail(n,k);
    }
    cout << "cycle = ";
    make_cyc(n,10);
    cout << detect_Cyc(n) << endl;
    return 0;
}