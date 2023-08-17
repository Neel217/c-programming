// sum of 2 number(integers)
#include <iostream>
using namespace std;

int sum(int a,int b) {
    int sum = a+b;
    return sum;
}

int main() {
    int x,y;
    cin >> x >> y;

    cout << "\n" << sum(x,y);
}