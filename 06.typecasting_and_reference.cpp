#include <iostream>
using namespace std;

void typeCastingExample() {
    int a = 10, b = 3;

    // Implicit typecasting (automatic conversion)
    double result1 = a / (double)b; 
    cout << "Implicit/Explicit Typecasting: " << result1 << endl;

    // Explicit typecasting
    double result2 = static_cast<double>(a) / b; 
    cout << "Explicit Typecasting using static_cast: " << result2 << endl;

    // C-style typecasting
    double result3 = (double)a / b;
    cout << "C-style Typecasting: " << result3 << endl;
}

void referenceVariableExample() {
    int x = 100;
    int &ref = x; // ref is reference to x

    cout << "Original x: " << x << endl;
    ref = 200; // changing ref also changes x
    cout << "After modifying ref, x: " << x << endl;

    int y = 50;
    ref = y; // ref now changes x to value of y (x = 50)
    cout << "After assigning y to ref, x: " << x << endl;
}

int main() {
    cout << "===== Typecasting Examples =====" << endl;
    typeCastingExample();

    cout << "\n===== Reference Variable Examples =====" << endl;
    referenceVariableExample();

    return 0;
}
