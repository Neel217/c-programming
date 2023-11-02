// A map is a generalized array that consists of key-value-pairs. While the keys in an ordinary array are always the consecutive integers 0,1,...,n−1, where n is the size of the array, the keys in a map can be of any data type and they do not have to be consecutive values. import map library
#include<iostream>
#include<map>
using namespace std;

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

int main()
{
    IO();
    map<string,int> m;
    cout << m["aybabtu"] << "\n"; // 0
    // function count checks if a key exists in a map
    return 0;
}