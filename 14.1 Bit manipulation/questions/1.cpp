// given number power of 2
#include<iostream>
using namespace std;

int power2(int n) {
    return n && !(n & n-1);
}

int main()
{
    int n;
    cin >> n;
    if(power2(n) == 1) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;
    return 0;
}