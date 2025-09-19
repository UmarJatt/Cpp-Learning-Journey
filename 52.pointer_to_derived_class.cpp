/*
    This program demonstrates **pointers with base and derived classes**:

    1. Base class pointer pointing to a derived object:
       - Can access only members of the Base class.
       - Cannot access members defined only in Derived.
       - If the function is not virtual, calling it via Base pointer uses Base class version.

    2. Derived class pointer:
       - Can access both Base and Derived class members.
       - Calls the derived version of functions if overridden.
*/

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int baseVar;

    void show() {  // Non-virtual function
        cout << "Base class variable: " << baseVar << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    int derivedVar;

    void show() {  // Overriding Base function
        cout << "Base class variable: " << baseVar << endl;
        cout << "Derived class variable: " << derivedVar << endl;
    }
};

int main() {
    Base* basePtr;   // Pointer to Base class
    Base b;
    Derived d;

    basePtr = &d;    // Base pointer points to Derived object

    basePtr->baseVar = 10;
    // basePtr->derivedVar = 20; ❌ Not allowed (Base pointer cannot see derived members)

    cout << "Using Base pointer:" << endl;
    basePtr->show(); // Calls Base::show (non-virtual function)

    cout << "-----------------------------" << endl;

    Derived* derivedPtr = &d;  // Pointer to Derived class
    derivedPtr->baseVar = 100;
    derivedPtr->derivedVar = 200;

    cout << "Using Derived pointer:" << endl;
    derivedPtr->show(); // Calls Derived::show

    return 0;
}
