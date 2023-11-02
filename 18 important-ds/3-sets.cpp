// a set is data structure that maintains a collection of elements. The basic operations of sets are element insertion, search and removal. import set library for implementation
// not possible to access the elements using the [] notation.
// all their elements are distinct
// C++ also contains the structures multiset and unordered_multiset that other- wise work like set and unordered_set but they can contain multiple instances of an element

#include<iostream>
#include <set>
using namespace std;

void IO() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}

int main()
{
    IO();
    multiset<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    // The function erase removes all instances of an element from a multiset. only one instance should be removed
    cout << s.count(5) << "\n";
    return 0;
}