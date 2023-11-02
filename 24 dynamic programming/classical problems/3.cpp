// frog jump with k steps
#include<bits/stdc++.h>
using namespace std;

#define PB push_back

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

int jump_k(int n, vector<int> &height, int k) {
    vector<int> dp(n);
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
        int mins = INT_MAX;
        for(int j = 1; j <= k; j++) {
            if(i-j >= 0) {
                int jump = dp[i-j] + abs(height[i] - height[i-j]);
                mins = min(jump,mins);
            }
        }
        dp[i] = mins;
    }
    return dp[n-1];
}

int main()
{
    IO(); 
    int n;
    cin >> n;
    vector<int> height;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        height.PB(a);
    }
    int l = jump_k(n,height,2);
    cout << l << endl;
}