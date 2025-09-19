#include <iostream>
using namespace std;

/*
This program demonstrates **constructor inheritance** in C++.

1. Base class: Person
   - Members: name, age
   - Constructor initializes name and age
   - Method: showPerson() to display base class info

2. Derived class: Student
   - Inherits from Person
   - Member: id
   - Constructor calls **base class constructor** using initializer list
   - Method: showStudent() displays base + derived info

3. Main function:
   - Create Student object
   - Display its details
*/

class Person {
protected:
    string name;
    int age;
public:
    // Base class constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Person constructor called" << endl;
    }

    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
    int id;
public:
    // Derived constructor calls base constructor using initializer list
    Student(string n, int a, int i) : Person(n, a) {
        id = i;
        cout << "Student constructor called" << endl;
    }

    void showStudent() {
        showPerson();   // Call base class method
        cout << "ID: " << id << endl;
    }
};

int main() {
    // Create Student object
    Student s("Umar", 19, 101);
    s.showStudent();    // Display all info

    return 0;
}
