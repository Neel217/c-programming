// frog jump
#include<bits/stdc++.h>
using namespace std;

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

int jumps(int n, vector<int> &height) {
    vector <int> dp(n,0);
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
        int fs = dp[i-1] + abs(height[i] - height[i-1]);
        int ss = INT_MAX;
        if(i > 1) {
            ss = dp[i-2] + abs(height[i] - height[i-2]);
        }
        dp[i] = min(fs,ss);
    }
    return dp[n-1];
}

int main()
{
    IO();
    int n;
    cin >> n;
    vector <int> height;
    int a;
    for(int i = 0; i < n; i++) {
        cin >> a;
        height.push_back(a);
    }
    
    cout << jumps(n,height) << endl;
    return 0;
}