#include <iostream>
using namespace std;

// Global variable (accessible everywhere)
int globalVar = 100;

void exampleFunction() {
    // Local variable (scope limited to this function)
    int localVar = 50;
    cout << "Inside function - localVar: " << localVar << endl;
    cout << "Inside function - globalVar: " << globalVar << endl;
}

int main() {
    // Local variable in main
    int mainVar = 10;

    cout << "Inside main - mainVar: " << mainVar << endl;
    cout << "Inside main - globalVar: " << globalVar << endl;

    exampleFunction();

    // Block scope example
    if (true) {
        int blockVar = 200;
        cout << "Inside block - blockVar: " << blockVar << endl;
    }
    // blockVar is not accessible here

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
    double result = (double)integerVar / 2;
    cout << "Type casting int to double: " << result << endl;

    return 0;
}
