//kadane algortihm
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i< n; i++) {
        cin >> a[i];
    }

    int currS = 0, maxSum = INT_MIN;
    for(int i=0; i<n; i++) {
        currS += a[i];
        if(currS < 0) {
            currS = 0;
        }
        maxSum = max(maxSum, currS);
    }

    cout << "Maximum subarray sum = " <<  maxSum << endl;

}