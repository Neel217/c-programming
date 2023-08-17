// all prime in given range
#include <iostream>
using namespace std;

bool f(int x) {
    for(int i = 2; i <= sqrt(x); i++) {
        if(x%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a,b;
    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        if(f(i) == true) {
            cout << i << " ";
        } 
    }
}