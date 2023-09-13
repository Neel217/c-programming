// number of 1's
#include<iostream>
using namespace std;

int count1(int n) {
    int ct = 0;
    while (n)
    {
        n =  n & (n-1);
        ct++;
    }
    return ct;
    
}

int main()
{
    cout << count1(19);
    return 0;
}