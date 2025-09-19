/*
    This program shows how to use templates with default type parameters:

    1. Class template with default types:
       - If we don't provide types, it uses default types (int, double).
       - We can also override the types when creating an object.

    2. Function template with default types:
       - Works like the class template, but for functions.
       - Can multiply values of different types.
*/

#include <iostream>
using namespace std;

// Class template with default types
template <typename T1 = int, typename T2 = double>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    void show() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

// Function template with default types
template <typename T1 = int, typename T2 = double>
T1 multiply(T1 a, T2 b) {
    return a * b;
}

int main() {
    // ✅ Using class template with default types
    Pair<> p1(5, 2.5);               // Uses default types: int, double
    Pair<string, int> p2("Umar", 19); // Override default types

    p1.show();
    p2.show();

    cout << "-----------------------------" << endl;

    // ✅ Using function template with default types
    cout << "Multiply default types: " << multiply(5, 2.5) << endl;
    cout << "Multiply overridden types: " 
         << multiply<long, float>(1000, 2.5f) << endl;

    return 0;
}
