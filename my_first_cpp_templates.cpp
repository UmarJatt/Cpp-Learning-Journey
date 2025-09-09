#include <iostream>
using namespace std;

// Function Template (generic function)
template <typename T>
T multiply(T a, T b) { // works for any data type
    return a * b;
}

int main() {
    // Integer multiplication
    int x = 5, y = 10;
    cout << "Int multiplication: " << multiply(x, y) << endl;

    // Double multiplication
    double p = 3.5, q = 2.0;
    cout << "Double multiplication: " << multiply(p, q) << endl;

    // Long multiplication
    long a = 1000, b = 2000;
    cout << "Long multiplication: " << multiply(a, b) << endl;

    return 0;
}
