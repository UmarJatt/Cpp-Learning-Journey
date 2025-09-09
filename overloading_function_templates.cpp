#include <iostream>
using namespace std;

// Function template 1: takes two parameters
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Function template 2: takes three parameters (overloaded)
template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

// Non-template function with same name (also allowed)
int add(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    cout << "Add two integers: " << add(5, 10) << endl;         // calls template 1
    cout << "Add three doubles: " << add(1.2, 3.4, 5.6) << endl; // calls template 2
    cout << "Add four integers: " << add(1, 2, 3, 4) << endl;   // calls non-template function

    return 0;
}
