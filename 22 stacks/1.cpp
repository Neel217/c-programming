// array -> implementation
#include<iostream>
using namespace std;

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

int n;

class stack {
private:
    int* a;
    int t;

public:
    stack() {
        a = new int[n];
        t = -1;
    }

    void push(int x) {
        if(t == n-1) {
            cout << "stack overflow";
        }
        t++;
        a[t]=x;
    }

    void pop() {
        if(t==-1) {
            cout << "no element in stack" << endl;
        }
        t--;
    }

    int top() {
        if(t==-1) {
            cout << "no element in stack" << endl;
            return -1;
        }
        return a[t];
    }

    bool empty() {
        return t ==-1;
    }

};

void Down_print(stack s)
{
    if (s.empty())
        return;

    int x = s.top();

    s.pop();
    cout << x << ' ';

    Down_print(s);
    s.push(x);
}

void Up_print(stack s)
{
    if (s.empty())
        return;

    int x = s.top();

    s.pop();
    Up_print(s);

    cout << x << ' ';

    s.push(x);
}

int main()
{
    IO();
    cin >> n; // size of stack
    stack a;
    int k; 
    for(int i=0; i<n; i++) {
        cin >> k; // number of element
        a.push(k);
    }
    Up_print(a);
    return 0;
}