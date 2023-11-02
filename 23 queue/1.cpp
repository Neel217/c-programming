// array implementation of queue
#include<iostream>
using namespace std;

int n;

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

class queue
{
private:
    int* a; int front; int back;
public:
    queue() {
        a = new int[n];
        front=-1; back = -1;
    }
    // functions
    void push(int x) {
        if(back == n-1) {
            cout << "OVERFLOW" << endl;
            return;
        } back++; a[back] = x;
        
        if(front==-1) {
            front++;
        }
    }

    void pop() {
        if(front == -1 || front > back) {
            cout << "NO ELEMENTS" << endl;
            return;
        }
        front++;
    }

    int peek() {
        if(front == -1 || front > back) {
            cout << "NO ELEMENTS" << endl;
            return -1;
        }
        return a[front];
    }
    
    bool empty() {
        if(front == -1 || front > back) {
            return true;
        }
        return false;
    }
};

void print_queue(queue q) {
    while (!q.empty())
    {
        cout << q.peek() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    IO();
    cin >> n;
    int k;
    queue x;
    for(int i = 0; i < n; i++) {
        cin >> k;
        x.push(k);
    }
    cout << "printed queue = ";
    print_queue(x);
    return 0;
}