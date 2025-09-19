/*
    This program demonstrates the use of C++ templates:

    1. Function Template:
       - The function 'add' can work with any data type (int, double, string, etc.)
       - It shows compile-time generic programming for functions.

    2. Class Template:
       - The class 'Box' can store a value of any data type.
       - Demonstrates how to create objects of different types using the same class template.
*/

#include <iostream>
using namespace std;

// Function Template to add two values
template <typename T>
T add(T a, T b) {
    return a + b; // works with any data type
}

// Class Template to hold a value
template <class T>
class Box {
    T value; // can be int, double, string, etc.
public:
    Box(T v) { value = v; } // constructor
    void show() { cout << "Value: " << value << endl; }
};

int main() {
    // ✅ Using Function Template
    cout << "Int addition: " << add(5, 10) << endl;
    cout << "Double addition: " << add(3.5, 2.7) << endl;
    cout << "String addition: " << add(string("Hello "), string("Umar")) << endl;

    cout << "-----------------------------" << endl;

    // ✅ Using Class Template
    Box<int> intBox(100);
    Box<double> doubleBox(3.14);
    Box<string> strBox("Template Example");

    intBox.show();
    doubleBox.show();
    strBox.show();

    return 0;
}
