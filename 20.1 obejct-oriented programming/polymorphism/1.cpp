// polymorphism -> opreator overloading
#include<iostream>
using namespace std;

class Complex {
private:
    int real,imag;
public:
    Complex(int r=0,int i =0) {
        real = r;
        imag=i;
    }

    Complex operator + (Complex const &obj) {
        Complex re;
        re.real = obj.real + real;
        re.imag = obj.imag + imag;
        return re;
    }
    void display() {
        cout << real << " + i" << imag;
    }
};

class Base {
public:
// if to not to use this print function add virtual keyword on it
    virtual void print() {
        cout << "Base print" << endl;
    }
    void display() {
        cout << "Base Display" << endl;
    }
};

class derived: public Base {
public:
    void print() {
        cout << "Derieved print" << endl;
    }
    void display() {
        cout << "Derieved Display" << endl;
    }
};

int main()
{
    // Complex c1(6,3), c2(2,3);
    // Complex c3 = c1 + c2;
    // c3.display();

    Base *basepte;
    derived d;
    basepte = &d;
    
    basepte->print();
    basepte->display();
    return 0;
}