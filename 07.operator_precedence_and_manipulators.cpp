// This program demonstrates:
// 1. Operator precedence in expressions
// 2. Using manipulators to format output (like setprecision, setw, alignment, boolalpha)

#include <iostream>
#include <iomanip>  // for manipulators like setprecision, setw
using namespace std;

int main() {

    // =========================
    // 1️⃣ Operator Precedence Example
    // =========================
    int a = 10, b = 5, c = 2;

    // Multiplication (*) happens before addition (+)
    int result1 = a + b * c;
    cout << "a + b * c = " << result1 << endl; 

    // Parentheses change the order: addition happens first
    int result2 = (a + b) * c;
    cout << "(a + b) * c = " << result2 << endl;

    // Division (/) happens before addition (+)
    int result3 = a / b + c;
    cout << "a / b + c = " << result3 << endl;

    // =========================
    // 2️⃣ Manipulators Example
    // =========================
    double pi = 3.14159265;

    // Fixed-point notation with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Pi with 2 decimal places: " << pi << endl;

    // Set width to 10 spaces
    cout << setw(10);
    cout << "Width 10: " << pi << endl;

    // Left alignment
    cout << left << setw(10) << "Left: " << pi << endl;

    // Right alignment
    cout << right << setw(10) << "Right: " << pi << endl;

    // Print boolean as true/false
    cout << boolalpha;
    bool flag = true;
    cout << "Boolean value: " << flag << endl;

    // Back to numeric (1/0)
    cout << noboolalpha;
    cout << "Boolean value (numeric): " << flag << endl;

    return 0; // end of program
}
