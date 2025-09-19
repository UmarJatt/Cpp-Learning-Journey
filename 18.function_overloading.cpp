// This program demonstrates function overloading in C++
// Function overloading allows multiple functions with the same name
// but different parameter types or number of parameters

#include <iostream>
using namespace std;

// =========================
// Function Definitions
// =========================

// Add two integers
int add(int a, int b) {
    return a + b;
}

// Add two double numbers
double add(double a, double b) {
    return a + b;
}

// Add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {

    // Using function overloading
    cout << "Add two integers 5 + 10 = " << add(5, 10) << endl;
    cout << "Add two doubles 2.5 + 3.7 = " << add(2.5, 3.7) << endl;
    cout << "Add three integers 1 + 2 + 3 = " << add(1, 2, 3) << endl;

    return 0; // end of program
}
