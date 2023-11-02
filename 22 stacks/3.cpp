// reverse string
#include<iostream>
#include <stack>
using namespace std;

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

void reverse(string s) {
    stack<string> st;
    for(int i = 0; i < s.length(); i++) {
        string word ="";
        while(s[i] != ' ' && i < s.length()) {
            word += s[i]; i++;
        }
        st.push(word);
    }
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    IO();
    string s;
    getline(cin, s);
    reverse(s);
    return 0;
}