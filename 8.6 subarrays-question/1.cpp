// maximum subarray sum
#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n]; 

    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int maxSum = INT_MIN;
    // subarray
    for(int i=0;i<n;i++) {
        for(int j = i; j< n; j++) {
            int sum=0; // sum variable
            for(int k = i; k <= j; k++) {
                sum += a[k];
                // cout << a[k] << " ";
            }
            maxSum = max(maxSum,sum); // updating variable
        }
    }

    cout << "Max sum of subarray = " << maxSum << endl;
}