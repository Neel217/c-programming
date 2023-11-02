// climbing stairs
#include<bits/stdc++.h>
using namespace std;

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

int solve(int n) {
    vector<int> dp(n+1,-1);
    dp[0] = dp[1] = 1;
    for(int i=2; i<=n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main()
{
    IO();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}