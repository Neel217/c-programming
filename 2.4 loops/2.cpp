// table of 10
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    int s;
    for(int i = 1; i <= 10; i++) {
        s = n*i;
        cout << s << "\n";
    }
}