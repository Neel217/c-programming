// spiral order matrix transversal(printing matrix in spiral order)
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j=0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    int r_st=0, r_end=n-1, c_st = 0, c_end = m-1;

    while (r_st <= r_end && c_st <= c_end) {
        for(int col = c_st; col <= c_end; col++) {
            cout << a[r_st][col] << " ";
        } r_st++;

        for(int row = r_st; row <= r_end; row++) {
            cout << a[row][c_end] << " ";
        } c_end--;

        for(int col = c_end; col >= c_st; col--) {
            cout << a[r_end][col] << " ";
        } r_end--;
        
        for(int row = r_end; row >= r_st; row--) {
            cout << a[row][c_st] << " ";
        } c_st++;
    }
}