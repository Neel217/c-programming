#include<iostream>
using namespace std;

// Single inheritance
class Ia {
    public:
    void IA() {
        cout << "IA" << endl;
    }
};
class B : public Ia {};

int main()
{
    B b;
    b.IA();
    return 0;
}