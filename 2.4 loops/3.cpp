// to add positive number only
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >>  n;
    int i=0;
    do
    {
        i += n;
        cin >> n;
    } while (n>0);
    
    cout << "The sum is " << i << endl;
}