/*
    This program demonstrates a function template to find the maximum of two values.

    - The template function "maximum" works with any data type (int, double, char, etc.).
    - It returns the greater of the two values using a simple conditional check.
*/

#include <iostream>
using namespace std;

// Function template (generic function)
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;  // returns a if a > b, otherwise returns b
}

int main() {
    // ✅ Integer comparison
    int x = 10, y = 20;
    cout << "Maximum of " << x << " and " << y << " is " << maximum(x, y) << endl;

    // ✅ Double comparison
    double p = 3.5, q = 2.7;
    cout << "Maximum of " << p << " and " << q << " is " << maximum(p, q) << endl;

    // ✅ Character comparison
    char c1 = 'A', c2 = 'Z';
    cout << "Maximum of " << c1 << " and " << c2 << " is " << maximum(c1, c2) << endl;

    return 0;
}
