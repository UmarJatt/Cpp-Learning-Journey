/*
    This program demonstrates a function template in C++.

    - The template function "maximum" works with any data type:
        int, double, char, etc.
    - It takes two values and returns the larger one.
    - Using templates avoids writing multiple functions for different types.
*/

#include <iostream>
using namespace std;

// Function template to find maximum of two values
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;  // return the greater value
}

int main() {
    // Integer comparison
    int x = 10, y = 20;
    cout << "Maximum of " << x << " and " << y << " is " << maximum(x, y) << endl;

    // Double comparison
    double p = 3.5, q = 2.7;
    cout << "Maximum of " << p << " and " << q << " is " << maximum(p, q) << endl;

    // Character comparison
    char c1 = 'A', c2 = 'Z';
    cout << "Maximum of " << c1 << " and " << c2 << " is " << maximum(c1, c2) << endl;

    return 0;
}
