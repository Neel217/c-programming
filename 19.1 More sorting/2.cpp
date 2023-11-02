// count sort
#include<iostream>
#include <cmath>
using namespace std;

void countSort(int a[], int n) {
    int k = a[0];
    for(int i = 0; i < n; i++) {
        k = max(k,a[i]);
    }
    int count[1000] = {0};
    for(int i = 0; i < n; i++) {
        count[a[i]]++;
    }
    for(int i = 1; i <= k; i++) {
       count[i] += count[i-1];
    }
    int output[n];
    for(int i = n-1; i >= 0; i--) {
        output[--count[a[i]]] = a[i];
    }
     for(int i = 0; i < n; i++) {
        a[i] = output[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    countSort(a,n);
    for(int i = 0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}