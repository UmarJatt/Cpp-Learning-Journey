/*
    This program demonstrates C++ templates with multiple parameters:

    1. Function template with two different types: 
       Can take arguments of different types and display them.

    2. Class template with two different types:
       Can store a pair of values with different types and display them.
*/

#include <iostream>
using namespace std;

// Function template with two types
template <typename T1, typename T2>
void display(T1 a, T2 b) {
    cout << "First value: " << a << ", Second value: " << b << endl;
}

// Class template with two types
template <class T1, class T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    void show() {
        cout << "Pair: " << first << " and " << second << endl;
    }
};

int main() {
    // ✅ Using function template
    display(10, 3.14);        // int + double
    display("Hello", 100);    // string + int

    cout << "-----------------------------" << endl;

    // ✅ Using class template
    Pair<int, double> p1(5, 2.5);
    Pair<string, int> p2("Umar", 19);

    p1.show();
    p2.show();

    return 0;
}
