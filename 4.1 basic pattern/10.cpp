// 0,1 triangle
#include <iostream>
using namespace std;

int main() {
    int i,j,r;
    cin >> r;
    cout << endl;

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j<= i; j++) {
            if ((i+j)%2==0) {
                cout << "1" << " ";
            } else {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }


}