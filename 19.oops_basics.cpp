// This program demonstrates basic Object-Oriented Programming (OOP) concepts in C++:
// 1. Class and objects
// 2. Encapsulation (private members)
// 3. Constructor
// 4. Destructor
// 5. Methods

#include <iostream>
using namespace std;

// =========================
// Class Definition
// =========================
class Student {
private:
    int id;         // private variable, cannot be accessed directly outside class
    string name;    // private variable

public:
    // Constructor: called automatically when object is created
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Method to display student details
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Destructor: called automatically when object goes out of scope
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {

    // Creating objects of Student class
    Student s1(1, "Umar");
    Student s2(2, "Ali");

    // Calling methods
    s1.display();
    s2.display();

    return 0; // end of program
}
