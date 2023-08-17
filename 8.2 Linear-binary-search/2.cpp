#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
    int s = 0; int e = n;
    while (s <= n) {
        int mid = (s+e)/2;
        if(a[mid] == key) {
            return mid;
        }
        else if(a[mid]>key) {
            e = mid-1;
        } else {
            s = mid+1;
        }

    }
    return -1;
}

int main() {
    int n, key;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> key;

    cout << " location(index) = " << binarySearch(a, n,key) << " ";
}