// Sum till n
#include<iostream>
using namespace std;

int sum(int n) {
    if(n==0) {
        return 0;
    }

    int prevS = sum(n-1);
    return n + prevS;
}

int main()
{
    int n;
    cin >> n;

    cout << sum(n) << endl;

    return 0;
}