// This program demonstrates the difference between:
// 1. Call by Value (function gets a copy of variable)
// 2. Call by Reference (function gets actual variable)

#include <iostream>
using namespace std;

// =========================
// Function Definitions
// =========================

// Call by value: changes only local copy, original variable remains unchanged
void callByValue(int x) {
    x = x + 10; // modify local copy
    cout << "Inside callByValue, x = " << x << endl;
}

// Call by reference: changes the original variable
void callByReference(int &x) {
    x = x + 10; // modify actual variable
    cout << "Inside callByReference, x = " << x << endl;
}

int main() {
    int a = 5; // original variable

    cout << "Original a: " << a << endl;

    // Call function by value
    callByValue(a);
    cout << "After callByValue, a: " << a << endl; // a is unchanged

    // Call function by reference
    callByReference(a);
    cout << "After callByReference, a: " << a << endl; // a is changed

    return 0; // end of program
}
