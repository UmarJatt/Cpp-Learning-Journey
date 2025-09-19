// This program demonstrates basic input and output in C++
// - Using cout to display messages
// - Using cin to take input from the user
// - Formatting output
// - Using escape sequences

#include <iostream>
#include <string>
#include <iomanip>  // for formatting output like setprecision

using namespace std;

int main() {

    // =========================
    // Output examples
    // =========================
    cout << "Hello, C++ World!" << endl;  // simple output
    cout << "This is basic output using cout\n";

    // Printing multiple values in one line
    int a = 5, b = 10;
    cout << "a = " << a << ", b = " << b << endl;

    // Formatted output with 2 decimal places
    double pi = 3.14159265;
    cout << fixed << setprecision(2);  // set 2 decimal places
    cout << "Pi (formatted): " << pi << endl;

    // =========================
    // Input examples
    // =========================
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You entered: " << age << endl;

    float height;
    cout << "Enter your height in meters: ";
    cin >> height;
    cout << "Height: " << height << " meters" << endl;

    // Reading a single word (no spaces)
    string firstName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Hello, " << firstName << "!" << endl;

    // Reading full line including spaces
    cin.ignore();  // ignore leftover newline from previous input
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Nice to meet you, " << fullName << "!" << endl;

    // =========================
    // Input and output with operators
    // =========================
    int num1, num2;
    cout << "Enter two numbers separated by space: ";
    cin >> num1 >> num2;
    cout << "Sum: " << num1 + num2 << ", Product: " << num1 * num2 << endl;

    // =========================
    // Using escape sequences
    // =========================
    cout << "This is a new line -> \\n\n";
    cout << "This is a tab -> \\t\tDone\n";

    return 0;  // end of program
}
