#include <iostream>
using namespace std;

// Function using call by value
void callByValue(int x) {
    x = x + 10; // changes only local copy
    cout << "Inside callByValue, x = " << x << endl;
}

// Function using call by reference
void callByReference(int &x) {
    x = x + 10; // changes original variable
    cout << "Inside callByReference, x = " << x << endl;
}

int main() {
    int a = 5;

    cout << "Original a: " << a << endl;
    callByValue(a);
    cout << "After callByValue, a: " << a << endl;

    callByReference(a);
    cout << "After callByReference, a: " << a << endl;

    return 0;
}
