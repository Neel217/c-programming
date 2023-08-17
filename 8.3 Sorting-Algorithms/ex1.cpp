// binary search + sorting(selction sort)
#include <iostream>
using namespace std;

void SelctionSort(int a[], int n) {
    for(int i=0; i < n-1; i++) {
        for (int j = i+1; j <n; j++) {
            if(a[i] > a[j]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

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
    int n, key; cin >> n; int a[n];
    for(int i = 0; i< n; i++) {
        cin >> a[i];
    }

    cin >> key;
    SelctionSort(a, n);

    int k = binarySearch(a,n,key);

    cout << endl << "location of element " <<k << " ";

}