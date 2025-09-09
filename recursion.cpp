#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) // base case
        return 1;
    return n * factorial(n - 1); // recursive call
}

// Recursive function to calculate sum of first n numbers
int sumN(int n) {
    if (n == 0) // base case
        return 0;
    return n + sumN(n - 1); // recursive call
}

// Recursive function to calculate Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;      // base case
    if (n == 1) return 1;      // base case
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
}

int main() {
    int num = 5;

    cout << "Factorial of " << num << " = " << factorial(num) << endl;
    cout << "Sum of first " << num << " numbers = " << sumN(num) << endl;

    cout << "Fibonacci sequence up to " << num << " terms: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
