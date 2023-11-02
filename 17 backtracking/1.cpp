#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n,h,st=0;
    cin >> n >> h;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) { if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    
    for(int i=n-1; i>=0; i--) {
        if(h-a[i] <= 0) { if(h > 0) { cout << a[i] << endl; } else { cout << a[i] + 1 << endl; } } h-=a[i];
    }
    
}

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--) {
	    solve();
	}
	return 0;
}
