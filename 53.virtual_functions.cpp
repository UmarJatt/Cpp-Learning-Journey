/*
    This program demonstrates **runtime polymorphism using virtual functions**:

    1. Base class pointer can point to any derived class object.
    2. Virtual functions allow the program to decide at runtime which function to call.
       - If 'sound()' is virtual, the derived class version is executed.
       - This is called **dynamic dispatch**.
*/

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function → allows derived classes to override
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {  // Override base class function
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

int main() {
    Animal* animalPtr;  // Pointer to Base class

    Dog d;
    Cat c;

    // Base pointer points to Dog
    animalPtr = &d;
    animalPtr->sound();  // Calls Dog's version dynamically

    // Base pointer points to Cat
    animalPtr = &c;
    animalPtr->sound();  // Calls Cat's version dynamically

    return 0;
}
