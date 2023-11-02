#include<iostream>
using namespace std;
// Hybrid inheritance

class Ia {
    public:
    void IA() {
        cout << "IA" << endl;
    }
};
class Ib: public Ia {
    public:
    void IB() {
        cout << "IB" << endl;
    }
};
class Ic {
    public:
    void IC() {
        cout << "IC" << endl;
    }
};

class Id: public Ic,public Ib{};

int main()
{
    Ia a;
    Id b;
    a.IA();
    b.IB();
    b.IC();
    return 0;
}