#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    // Virtual function → allows runtime polymorphism
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived Class 1
class Dog : public Animal {
public:
    void sound() override { // Override base function
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

int main() {
    Animal* animalPtr;  // Base class pointer

    Dog d;
    Cat c;

    // Base pointer points to Dog
    animalPtr = &d;
    animalPtr->sound();   // Calls Dog's version (runtime decision)

    // Base pointer points to Cat
    animalPtr = &c;
    animalPtr->sound();   // Calls Cat's version

    return 0;
}
