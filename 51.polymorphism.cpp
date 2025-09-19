/*
    This program demonstrates **polymorphism** in C++:

    1. Compile-time polymorphism (Function Overloading):
       - The Math class has two "add" functions: one for integers, one for doubles.
       - The compiler decides which function to call based on the arguments.

    2. Runtime polymorphism (Function Overriding):
       - The Animal class has a virtual function "sound".
       - Dog and Cat classes override the "sound" function.
       - A base class pointer can call the overridden function at runtime.
*/

#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    // Virtual function allows runtime polymorphism
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }

    // Non-virtual function (compile-time binding)
    void sleep() {
        cout << "Animal is sleeping." << endl;
    }
};

// Derived Class: Dog
class Dog : public Animal {
public:
    void sound() override {   // Overriding base class function
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// Derived Class: Cat
class Cat : public Animal {
public:
    void sound() override {   // Overriding base class function
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

// Class demonstrating Function Overloading (Compile-time polymorphism)
class Math {
public:
    int add(int a, int b) {         // Add integers
        return a + b;
    }

    double add(double a, double b) { // Add doubles
        return a + b;
    }
};

int main() {
    // -------------------------------
    // Compile-time Polymorphism
    // -------------------------------
    Math m;
    cout << "Sum of integers: " << m.add(5, 10) << endl;
    cout << "Sum of doubles: " << m.add(2.5, 3.7) << endl;

    cout << "-------------------------------" << endl;

    // -------------------------------
    // Runtime Polymorphism
    // -------------------------------
    Animal* animalPtr;  // Base class pointer

    Dog d;
    Cat c;

    // Pointer to Dog object
    animalPtr = &d;  
    animalPtr->sound();   // Calls Dog's sound() because of virtual function

    // Pointer to Cat object
    animalPtr = &c;  
    animalPtr->sound();   // Calls Cat's sound()

    return 0;
}
