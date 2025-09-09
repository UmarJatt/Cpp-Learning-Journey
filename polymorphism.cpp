#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    // Virtual function (supports runtime polymorphism)
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }

    // Non-virtual function (compile-time binding)
    void sleep() {
        cout << "Animal is sleeping." << endl;
    }
};

// Derived Class 1
class Dog : public Animal {
public:
    void sound() override {   // Overriding base class function
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// Derived Class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

// Function Overloading (Compile-time polymorphism)
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    // ✅ Compile-time Polymorphism (Function Overloading)
    Math m;
    cout << "Sum (int): " << m.add(5, 10) << endl;
    cout << "Sum (double): " << m.add(2.5, 3.7) << endl;

    cout << "------------------------" << endl;

    // ✅ Runtime Polymorphism (Function Overriding)
    Animal* animal1;  // Base class pointer

    Dog d;
    Cat c;

    animal1 = &d;  
    animal1->sound();   // Calls Dog's sound()

    animal1 = &c;  
    animal1->sound();   // Calls Cat's sound()

    return 0;
}
