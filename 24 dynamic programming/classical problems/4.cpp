// maximum sum of non-adjacent elements
#include<bits/stdc++.h>
using namespace std;

#define PB push_back

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

int sum(int n, vector<int> &v) {
    vector<int> dp(n,0);
    dp[0] = v[0];
    for (int i = 1; i < n; i++) {
        int pick = v[i];
        if (i > 1)
            pick += dp[i - 2];
        int nonPick = dp[i - 1];
        dp[i] = max(pick, nonPick);
    }
    return dp[n - 1];
}

int main()
{
    IO();
    int n;
    cin >> n;
    vector<int> sub(n);
    for(int i = 0; i < n; i++) {
        cin >> sub[i];
    }
    cout << sum(n, sub);
    return 0;
}