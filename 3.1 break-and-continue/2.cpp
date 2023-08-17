// no -> prime or not
#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    unsigned int i;
    for (i = 2; i < n; i++) {
        if (n%i == 0) {
            cout << "Not prime" << endl;
            break;
        }
    }

    if (i == n) {
        cout << "prime" << endl;
    }
}