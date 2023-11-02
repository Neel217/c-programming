// house robery
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

long long int house(vector<int> &v) {
    vector<int> temp1, temp2;
    int n = v.size();
    if(n==1) {
        return v[0];
    }
    for(int i = 0; i < n; i++) {
        if(i!=0) temp1.push_back(v[i]);
        if(i != n-1) temp2.push_back(v[i]);
    }
    return max(sum(n,temp1), sum(n,temp2));
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
    cout << house(sub) << endl;
    return 0;
}