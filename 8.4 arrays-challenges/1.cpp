// Max till i
#include <iostream>
using namespace std;

int main() {
    int mx=-1999999999;

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i<n; i++) {
        cin >> a[i];
    }

    for(int i =0; i<n; i++) {
        mx = max(mx,a[i]);
        cout << endl << mx << " ";
    }
}