// This program demonstrates:
// 1. Typecasting in C++ (implicit, explicit, C-style)
// 2. Reference variables and how they work

#include <iostream>
using namespace std;

// Function to show typecasting examples
void typeCastingExample() {
    int a = 10, b = 3;

    // Implicit/explicit typecasting: converting b to double before division
    double result1 = a / (double)b; 
    cout << "Implicit/Explicit Typecasting: " << result1 << endl;

    // Explicit typecasting using static_cast
    double result2 = static_cast<double>(a) / b; 
    cout << "Explicit Typecasting using static_cast: " << result2 << endl;

    // C-style typecasting
    double result3 = (double)a / b;
    cout << "C-style Typecasting: " << result3 << endl;
}

// Function to show reference variable examples
void referenceVariableExample() {
    int x = 100;

    // Creating a reference variable 'ref' that refers to 'x'
    int &ref = x;

    cout << "Original x: " << x << endl;

    // Modifying the reference changes the original variable
    ref = 200;
    cout << "After modifying ref, x: " << x << endl;

    int y = 50;

    // Assigning y to ref changes x to the value of y
    ref = y;
    cout << "After assigning y to ref, x: " << x << endl;
}

int main() {
    cout << "===== Typecasting Examples =====" << endl;
    typeCastingExample();

    cout << "\n===== Reference Variable Examples =====" << endl;
    referenceVariableExample();

    return 0; // end of program
}
