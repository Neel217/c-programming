// n*n*n ..... p times, or n^p
#include<iostream>
using namespace std;

int power(int n,int p) {
    if(n == 0 && p == 0) {
        return 1;
    } else if(p == 0) {
        return 1;
    }

    int preP = power(n,p-1);
    return n*preP;
}

int main()
{
    int n,p;
    cin >> n >> p;
    cout << power(n,p) << endl;
    return 0;
}