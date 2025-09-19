/*
    This program demonstrates how to use the "this" pointer in C++:

    1. The Student class has a constructor and member functions that use "this" pointer 
       to refer to the current object.
    2. "this->" resolves ambiguity when parameter names match member variable names.
    3. A member function returns the current object using "return *this" to allow 
       chaining of function calls.
*/

#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Constructor: using 'this' pointer to set member variables
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Function to set data, using 'this' pointer
    void setData(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Function to display student details
    void display() {
        cout << "Name: " << this->name << ", Age: " << this->age << endl;
    }

    // Function to update age and return the current object to allow chaining
    Student& updateAge(int newAge) {
        this->age = newAge;
        return *this;  // return the object itself
    }
};

int main() {
    // Creating an object of Student
    Student s1("Umar", 19);
    s1.display();

    // Using setData to update values
    s1.setData("Ali", 20);
    s1.display();

    // Chaining function calls using return *this
    s1.updateAge(21).display();

    return 0;
}
