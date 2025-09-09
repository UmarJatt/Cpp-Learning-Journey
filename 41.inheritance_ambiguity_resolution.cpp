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
        Base1::greet();
    }

    void greetFromBase2() {
        Base2::greet();
    }
};

int main() {
    Derived d;
    // d.greet(); ❌ Ambiguity error

    d.greetFromBase1(); // Resolved call
    d.greetFromBase2(); // Resolved call

    return 0;
}
