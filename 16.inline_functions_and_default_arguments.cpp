// This program demonstrates:
// 1. Inline functions (faster small functions)
// 2. Functions with default arguments

#include <iostream>
using namespace std;

// =========================
// 1️⃣ Inline Function
// =========================
// Inline function replaces function call with code itself to save time
inline int square(int x) {
    return x * x;
}

// =========================
// 2️⃣ Function with Default Argument
// =========================
// If second argument is not provided, default value 2 is used
int multiply(int a, int b = 2) {
    return a * b;
}

int main() {
    int num = 5;

    // Using inline function
    cout << "Square of " << num << " = " << square(num) << endl;

    // Using function with default argument
    cout << "Multiply 3 * 4 = " << multiply(3, 4) << endl; // both args provided
    cout << "Multiply 5 * default (2) = " << multiply(5) << endl; // uses default

    return 0; // end of program
}
