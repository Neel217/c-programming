// nth fibonaaci number
#include<iostream>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b;i++)

const int N = 1e3+2;

int dp[N];
int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 0;
    if(n==2) return 1;

    if(dp[n] != -1) {
        return dp[n];
    }
    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

int main()
{
    IO();
    int n;
    cin >> n;
    rep(i,0,N) {
        dp[i] = -1;
    }
    cout << fib(n) << endl;
    return 0;
}
