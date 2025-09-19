/*
This program demonstrates **ambiguity in multiple inheritance** and how to resolve it:

1. Base class 1: Base1
   - Method: greet() prints a message

2. Base class 2: Base2
   - Method: greet() also prints a different message

3. Derived class: Derived
   - Inherits from both Base1 and Base2
   - Ambiguity arises if we call greet() directly because both base classes have the same function name
   - Resolved using **scope resolution operator** (Base1::greet(), Base2::greet())

4. Main function:
   - Create Derived object
   - Call greetFromBase1() and greetFromBase2() to see resolved greetings
*/

#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void greet() {
        cout << "Hello from Base1" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void greet() {
        cout << "Hello from Base2" << endl;
    }
};

// Derived class inherits from both
class Derived : public Base1, public Base2 {
public:
    // Resolving ambiguity using scope resolution operator
    void greetFromBase1() {
        Base1::greet();  // calls Base1's greet()
    }

    void greetFromBase2() {
        Base2::greet();  // calls Base2's greet()
    }
};

int main() {
    Derived d;
    // d.greet(); ❌ Ambiguity error if called directly

    d.greetFromBase1(); // Resolved call to Base1
    d.greetFromBase2(); // Resolved call to Base2

    return 0;
}
