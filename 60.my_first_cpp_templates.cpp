/*
    This program demonstrates C++ templates:

    1. Function template: a single function works for multiple data types.
       Example: add integers, doubles, or strings using the same function.

    2. Class template: a single class works for different data types.
       Example: store and display int, double, or string values.
*/

#include <iostream>
using namespace std;

// Function template for addition
template <typename T>
T add(T a, T b) {
    return a + b;  // works for any type that supports '+'
}

// Class template to store a value
template <class T>
class Box {
    T value;  // can be any type
public:
    Box(T v) { value = v; }

    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // ✅ Using function template
    cout << "Int addition: " << add(5, 10) << endl;
    cout << "Double addition: " << add(3.5, 2.7) << endl;
    cout << "String addition: " << add(string("Hello "), string("Umar")) << endl;

    cout << "-----------------------------" << endl;

    // ✅ Using class template
    Box<int> intBox(100);
    Box<double> doubleBox(3.14);
    Box<string> strBox("Template Example");

    intBox.show();
    doubleBox.show();
    strBox.show();

    return 0;
}
