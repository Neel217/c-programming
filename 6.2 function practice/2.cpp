// nCr calculation
#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
         f = f*i;
    }
    return f;
}

int main() {
    int n,r;
    cin >> n >> r; // taking input

    cout << "\n" <<"nCr = " << fact(n)/fact(r)*fact(n-r);
}