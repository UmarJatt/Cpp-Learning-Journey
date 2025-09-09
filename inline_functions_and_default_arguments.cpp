#include <iostream>
using namespace std;

// Inline function
inline int square(int x) {
    return x * x;
}

// Function with default argument
int multiply(int a, int b = 2) {
    return a * b;
}

int main() {
    int num = 5;

    // Using inline function
    cout << "Square of " << num << " = " << square(num) << endl;

    // Using function with default argument
    cout << "Multiply 3 * 4 = " << multiply(3, 4) << endl;
    cout << "Multiply 5 * default (2) = " << multiply(5) << endl;

    return 0;
}
