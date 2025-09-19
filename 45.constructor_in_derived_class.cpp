/*
Program: Constructors in Derived Class

Description:
This program demonstrates how constructors work in inheritance.
- There is a Base class with its own constructor.
- There is a Derived class inheriting from Base with its own constructor.
- When a Derived class object is created:
    1. The Base class constructor is called first automatically.
    2. Then the Derived class constructor is called.
This ensures that the Base part of the object is initialized before the Derived part.
*/

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }
};

int main() {
    // Creating an object of Derived class
    Derived d;  // Base constructor runs first, then Derived constructor

    return 0;
}
