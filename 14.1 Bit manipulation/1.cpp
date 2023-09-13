#include<iostream>
using namespace std;

int getbit(int n,int i) {
    return ((n & (1<<i))!= 0);
}

int setbit(int n,int i) {
    return ((n | (1<<i)));
}

int clearbit(int n,int i) {
    int mask = ~(1<<i);
    return (n & mask);
}

int updatebit(int n,int i,int v) {
    int mask = ~(1<<i);
    n = n & mask;
    return ((n | (v << i)));
}

int main()
{
    // get bit
    // cout << getbit(5,2);
    
    //set bit
    // cout << setbit(5,1);

    // clear bit
    // cout << clearbit(5,2);

    // update bit
    cout << updatebit(5,1,1);

    return 0;
}