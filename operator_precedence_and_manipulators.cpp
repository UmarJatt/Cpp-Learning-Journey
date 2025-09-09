#include <iostream>
#include <iomanip>  // for manipulators
using namespace std;

int main() {
    // =========================
    // Operator Precedence Example
    // =========================
    int a = 10, b = 5, c = 2;

    int result1 = a + b * c; // * has higher precedence than +
    cout << "a + b * c = " << result1 << endl; 

    int result2 = (a + b) * c; // parentheses change precedence
    cout << "(a + b) * c = " << result2 << endl;

    int result3 = a / b + c; // / has higher precedence than +
    cout << "a / b + c = " << result3 << endl;

    // =========================
    // Manipulators Example
    // =========================
    double pi = 3.14159265;

    cout << fixed; // fixed-point notation
    cout << setprecision(2); // 2 decimal places
    cout << "Pi with 2 decimal places: " << pi << endl;

    cout << setw(10); // set width
    cout << "Width 10: " << pi << endl;

    cout << left; // left alignment
    cout << setw(10) << "Left: " << pi << endl;

    cout << right; // right alignment
    cout << setw(10) << "Right: " << pi << endl;

    cout << boolalpha; // print bool as true/false
    bool flag = true;
    cout << "Boolean value: " << flag << endl;

    cout << noboolalpha; // back to 1/0
    cout << "Boolean value (numeric): " << flag << endl;

    return 0;
}
