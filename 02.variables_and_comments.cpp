// This program demonstrates basic C++ concepts:
// - Comments
// - Variables of different types
// - Constants
// - Multiple variable declarations
// - Type casting
// - User input
// - Escape sequences
// - Output formatting

#include <iostream>   // for input and output
#include <iomanip>    // for formatting output like setprecision
#include <string>     // for using string variables

using namespace std;

int main() {

    // =========================
    // 1️⃣ Comments in C++
    // =========================
    // Single-line comment
    /* Multi-line comment
       Can write multiple lines here */
    /// Documentation comment (used in some IDEs)

    // =========================
    // 2️⃣ Variables
    // =========================
    int age = 19;           // integer variable
    cout << "Age: " << age << endl;

    float height = 5.9f;    // float variable
    cout << "Height: " << height << " feet" << endl;

    double weight = 72.5;   // double variable (more precise than float)
    cout << "Weight: " << weight << " kg" << endl;

    char grade = 'A';       // single character
    cout << "Grade: " << grade << endl;

    bool isStudent = true;  // boolean variable (true or false)
    cout << "Is Student? " << isStudent << endl; // 1 = true, 0 = false

    string name = "Umar";   // string variable
    cout << "Name: " << name << endl;

    // =========================
    // 3️⃣ Constants
    // =========================
    const double PI = 3.14159; // cannot be changed later
    cout << "PI: " << PI << endl;

    // =========================
    // 4️⃣ Multiple variable declaration
    // =========================
    int x = 10, y = 20, z = 30;
    cout << "x + y + z = " << x + y + z << endl;

    // =========================
    // 5️⃣ Type Casting
    // =========================
    double result = (double)x / y; // converting integer to double
    cout << "x / y = " << result << endl;

    // =========================
    // 6️⃣ Input from user
    // =========================
    int userAge;
    cout << "Enter your age: ";
    cin >> userAge;
    cout << "You entered: " << userAge << endl;

    string userName;
    cout << "Enter your name: ";
    cin.ignore(); // ignore leftover newline from previous input
    getline(cin, userName); // read full line
    cout << "Hello, " << userName << "!" << endl;

    // =========================
    // 7️⃣ More on variable types
    // =========================
    short s = 32767;                // short integer
    long l = 1234567890;            // long integer
    long long ll = 9876543210;      // long long integer
    unsigned int u = 4000000000;    // unsigned integer (positive only)
    cout << "Short: " << s << ", Long: " << l 
         << ", Long Long: " << ll << ", Unsigned: " << u << endl;

    // =========================
    // 8️⃣ Escape sequences
    // =========================
    cout << "New Line -> \\n Example\n";
    cout << "Tab -> \\t Example\tDone\n";
    cout << "Backslash -> \\\n";

    // =========================
    // 9️⃣ Formatting output
    // =========================
    cout << fixed << setprecision(2); // set 2 decimal places
    double price = 123.45678;
    cout << "Price: " << price << endl;

    return 0; // program ends
}
