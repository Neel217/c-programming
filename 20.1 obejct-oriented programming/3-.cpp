#include<iostream>
using namespace std;
// multiple inheritence
class Ia {
    public:
    void IA() {
        cout << "IA" << endl;
    }
};
class Ib{
    public:
    void IB() {
        cout << "IB" << endl;
    }
};

class C: public Ia, public Ib{};

int main()
{
    C a; // object
    a.IA();
    a.IB();
    return 0;
}