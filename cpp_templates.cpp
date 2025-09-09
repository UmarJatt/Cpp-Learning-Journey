#include <iostream>
using namespace std;

// Function Template
template <typename T>
T add(T a, T b) { // works with any data type
    return a + b;
}

// Class Template
template <class T>
class Box {
    T value;
public:
    Box(T v) { value = v; }
    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // ✅ Function Template examples
    cout << "Int addition: " << add(5, 10) << endl;
    cout << "Double addition: " << add(3.5, 2.7) << endl;
    cout << "String addition: " << add(string("Hello "), string("Umar")) << endl;

    cout << "-----------------------------" << endl;

    // ✅ Class Template examples
    Box<int> intBox(100);
    Box<double> doubleBox(3.14);
    Box<string> strBox("Template Example");

    intBox.show();
    doubleBox.show();
    strBox.show();

    return 0;
}
