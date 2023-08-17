// Binary search
#include <iostream>
using namespace std;

void Swap(int a[]) {
    int i;
    if (a[i] > a[i+1]) {
        int temp = a[i];
        a[i+1] = a[i];
        a[i] = temp;
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i =0; i < n; i++) {
        cin >> a[i];
    }

    int counter = 1;
    while(counter < n) {
        for(int i = 0; i < n-counter; i++) {
            if (a[i] > a[i+1]) {
                swap(a[i],a[i+1]);
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}