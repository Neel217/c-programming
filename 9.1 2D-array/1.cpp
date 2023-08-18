// searching in matrix
#include<iostream>
#include <climits>
using namespace std;


int main()
{
    int n,m;
    cin >> n >> m;

    int a[n][m];
    for(int i=0; i<n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j]; // input matrix
        }
    }
    
    int key;
    cout << "Enter key: "; cin >> key; //input key

    bool flag = false;

    // Linear search
    for(int i =0; i < n; i++) {
        for(int j =0;j< m; j++) {
            if(a[i][j] == key) {
                cout << "Index = " << i << " " << j << endl;
                flag = true;
            }
        }
    }

    if(flag) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

}