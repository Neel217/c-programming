#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;
    void print() {
        cout << "Info = " << name << " " << age << " " << gender;
    }
};

int main()
{
    int n;
    cin >> n;
    student arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i].name;
        cin >> arr[i].age;
        cin >> arr[i].gender;
    }

    for(int i=0; i<n; i++) {
        arr[i].print();
    }
    return 0;
}