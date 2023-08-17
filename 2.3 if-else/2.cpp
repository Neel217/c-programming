// maximum among two nummbers
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << endl;

    if (a > b) {
        cout << a << ">" << b;
    } else if(b > a) {
        cout << b << ">"<<a;
    } else {
        cout << "both number are equal";
    }
}
