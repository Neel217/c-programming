// A bitset is an array whose each value is either 0 or 1
#include<iostream>
#include <set>
#include <bitset>
#include <string>
using namespace std;

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

int main()
{
    IO();
    bitset <3> s;
    s[1] = 1;
    s[3] = 1;
    s[2] = 1;
    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0

    // can be used for string
    bitset<10> v(string("0110011010")); // from right to left
    cout << v << endl;
    // The function count returns the number of ones in the bitset
    cout << v.count() << endl;
    // we can using bit operations in string
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110
    return 0;
}