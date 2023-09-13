// all posible subsets
#include<iostream>
using namespace std;

void subsets(int a[], int n) {
    for (int i = 0; i < (1<<n); i++) {
        for (int j = 0; i < n; j++) {
            if ((i & (1 << j))) {
                cout << a[j] << " ";
            }
        }
    }
}

int main()
{
    int a[2] = {1,2};
    subsets(a,2);
    return 0;
}