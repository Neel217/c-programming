// sum of first n natural number
#include <iostream>
using namespace std;

int main() {
    int n,s;
    s=0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
       s = s+i;
    }
    cout << s << endl;
    return 0;
}