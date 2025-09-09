#include <iostream>
using namespace std;

// Base Class
class Base {
public:
    int baseVar;
    void show() {
        cout << "Base class variable: " << baseVar << endl;
    }
};

// Derived Class
class Derived : public Base {
public:
    int derivedVar;
    void show() {
        cout << "Base class variable: " << baseVar << endl;
        cout << "Derived class variable: " << derivedVar << endl;
    }
};

int main() {
    Base* basePtr;     // Base class pointer
    Base b;
    Derived d;

    basePtr = &d;  // Base pointer pointing to Derived object

    basePtr->baseVar = 10;
    // basePtr->derivedVar = 20; ❌ Not allowed (Base pointer can't access derived-only members)

    cout << "Using Base pointer:" << endl;
    basePtr->show();  // Calls Base::show (because function is not virtual)

    cout << "-----------------------------" << endl;

    // If we use Derived pointer
    Derived* derivedPtr = &d;
    derivedPtr->baseVar = 100;
    derivedPtr->derivedVar = 200;

    cout << "Using Derived pointer:" << endl;
    derivedPtr->show();  // Calls Derived::show

    return 0;
}
