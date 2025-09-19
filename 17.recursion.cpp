// This program demonstrates recursion in C++:
// 1. Factorial of a number
// 2. Sum of first n numbers
// 3. Fibonacci sequence

#include <iostream>
using namespace std;

// =========================
// 1️⃣ Recursive function: Factorial
// =========================
int factorial(int n) {
    if (n == 0 || n == 1) // base case
        return 1;
    return n * factorial(n - 1); // recursive call
}

// =========================
// 2️⃣ Recursive function: Sum of first n numbers
// =========================
int sumN(int n) {
    if (n == 0) // base case
        return 0;
    return n + sumN(n - 1); // recursive call
}

// =========================
// 3️⃣ Recursive function: Fibonacci sequence
// =========================
int fibonacci(int n) {
    if (n == 0) return 0; // base case
    if (n == 1) return 1; // base case
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
}

int main() {
    int num = 5;

    // Factorial
    cout << "Factorial of " << num << " = " << factorial(num) << endl;

    // Sum of first n numbers
    cout << "Sum of first " << num << " numbers = " << sumN(num) << endl;

    // Fibonacci sequence
    cout << "Fibonacci sequence up to " << num << " terms: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0; // end of program
}
