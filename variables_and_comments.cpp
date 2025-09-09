#include <iostream>
#include <iomanip> // for formatting
#include <string>  // for string variables
using namespace std;

int main() {

    // =========================
    // 1️⃣ Comments in C++
    // =========================

    // This is a single-line comment

    /*
        This is a multi-line comment
        You can write multiple lines here
    */

    /// This is a documentation comment (used in some IDEs)

    // =========================
    // 2️⃣ Variables in C++
    // =========================

    // Integer variable
    int age = 19;
    cout << "Age: " << age << endl;

    // Float variable
    float height = 5.9f;
    cout << "Height: " << height << " feet" << endl;

    // Double variable (more precision than float)
    double weight = 72.5;
    cout << "Weight: " << weight << " kg" << endl;

    // Character variable
    char grade = 'A';
    cout << "Grade: " << grade << endl;

    // Boolean variable
    bool isStudent = true;
    cout << "Is Student? " << isStudent << endl; // prints 1 (true) or 0 (false)

    // String variable
    string name = "Umar";
    cout << "Name: " << name << endl;

    // =========================
    // 3️⃣ Constants
    // =========================
    const double PI = 3.14159; // cannot be changed
    cout << "PI: " << PI << endl;

    // =========================
    // 4️⃣ Multiple variable declaration
    // =========================
    int x = 10, y = 20, z = 30;
    cout << "x + y + z = " << x + y + z << endl;

    // =========================
    // 5️⃣ Type Casting
    // =========================
    double result;
    result = (double)x / y; // casting integer to double
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
    cin.ignore(); // to ignore leftover newline from previous input
    getline(cin, userName);
    cout << "Hello, " << userName << "!" << endl;

    // =========================
    // 7️⃣ More on variable types
    // =========================
    
    short s = 32767; // short integer
    long l = 1234567890; // long integer
    long long ll = 9876543210; // long long integer
    unsigned int u = 4000000000; // unsigned integer (positive only)

    cout << "Short: " << s << ", Long: " << l << ", Long Long: " << ll << ", Unsigned: " << u << endl;

    // =========================
    // 8️⃣ Escape sequences
    // =========================
    cout << "New Line -> \\n Example\n";
    cout << "Tab -> \\t Example\tDone\n";
    cout << "Backslash -> \\\n";

    // =========================
    // 9️⃣ Formatting output
    // =========================
    cout << fixed << setprecision(2); // 2 decimal places
    double price = 123.45678;
    cout << "Price: " << price << endl;

    return 0;
}
