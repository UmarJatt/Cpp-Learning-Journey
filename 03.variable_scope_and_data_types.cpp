// This program demonstrates:
// 1. Different variable scopes (global, local, block)
// 2. Data types in C++
// 3. Type casting

#include <iostream>
using namespace std;

// Global variable - can be accessed anywhere in the program
int globalVar = 100;

// Function to show local and global variable usage
void exampleFunction() {
    int localVar = 50; // local variable only inside this function
    cout << "Inside function - localVar: " << localVar << endl;
    cout << "Inside function - globalVar: " << globalVar << endl;
}

int main() {
    int mainVar = 10; // local variable inside main
    cout << "Inside main - mainVar: " << mainVar << endl;
    cout << "Inside main - globalVar: " << globalVar << endl;

    // Call function to see variable scopes
    exampleFunction();

    // Block scope example
    if (true) {
        int blockVar = 200; // only accessible inside this block
        cout << "Inside block - blockVar: " << blockVar << endl;
    }
    // blockVar cannot be used here

    // =========================
    // Data types in C++
    // =========================
    int integerVar = 5;
    float floatVar = 3.14f;
    double doubleVar = 9.876;
    char charVar = 'A';
    bool boolVar = true;

    cout << "\nData Types Example:" << endl;
    cout << "int: " << integerVar << endl;
    cout << "float: " << floatVar << endl;
    cout << "double: " << doubleVar << endl;
    cout << "char: " << charVar << endl;
    cout << "bool: " << boolVar << endl;

    // Type casting example
    double result = (double)integerVar / 2; // convert int to double before division
    cout << "Type casting int to double: " << result << endl;

    return 0; // end of program
}
