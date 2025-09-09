#include <iostream>
using namespace std;

// Function prototype
int add(int, int);
void greet(string);

int main() {
    // Calling function with return type
    int sum = add(5, 10);
    cout << "Sum: " << sum << endl;

    // Calling function without return type (void)
    greet("Umar");

    // Function with default arguments
    cout << "Multiply 3*4: " << multiply(3, 4) << endl;
    cout << "Multiply 5*2 (using default): " << multiply(5) << endl;

    return 0;
}

// Function definitions

// Function with return type
int add(int a, int b) {
    return a + b;
}

// Function without return type (void)
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

// Function with default argument
int multiply(int x, int y = 2) {
    return x * y;
}
