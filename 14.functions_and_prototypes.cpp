// This program demonstrates functions in C++:
// 1. Function with return type
// 2. Function without return type (void)
// 3. Function with default arguments

#include <iostream>
using namespace std;

// =========================
// Function Prototypes
// =========================
int add(int, int);           // function that adds two numbers and returns result
void greet(string);          // function that greets user
int multiply(int, int = 2);  // function with default argument

int main() {

    // =========================
    // 1️⃣ Function with return type
    // =========================
    int sum = add(5, 10);  // call add function
    cout << "Sum: " << sum << endl;

    // =========================
    // 2️⃣ Function without return type (void)
    // =========================
    greet("Umar");          // call greet function

    // =========================
    // 3️⃣ Function with default argument
    // =========================
    cout << "Multiply 3 * 4: " << multiply(3, 4) << endl; // both args provided
    cout << "Multiply 5 * 2 (using default): " << multiply(5) << endl; // second arg default

    return 0; // end of program
}

// =========================
// Function Definitions
// =========================

// Function that adds two integers
int add(int a, int b) {
    return a + b;
}

// Function that greets user
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

// Function that multiplies two numbers (second has default value)
int multiply(int x, int y) {
    return x * y;
}
