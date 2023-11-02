#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define st string
#define in int


class Stack {
private:
   // Vector to store elements	
   vector<in> elements; 
public:
   	void push(int element) {
   	 // Add element to vector	
      elements.push_back(element);
    }
    void pop() {
        if (elements.empty()) {
            cout << "Stack is full" << endl;
        } else {
        // Remove last element from vector	
            elements.pop_back(); 
        }
    }
    int top() {
        if (elements.empty()) {
            cout << "Stack is empty" << endl;
            return 0;
        } else {
         // Return last element in vector
            return elements.back(); 
        }
    }

    bool empty() {
    	// Check if vector is empty
        return elements.empty(); 
    }

void display() {
    vector<int> v = elements;
    if (v.empty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements are: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
  }
};  

int main() {
    Stack stack;
    //Initialize a stack 
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.display();
    return 0;
}
