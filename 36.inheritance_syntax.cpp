/*
This program demonstrates Single Inheritance in C++:

1. Base class: Person
   - Contains public members: name and age
   - Has a method to set these values

2. Derived class: Student
   - Inherits publicly from Person
   - Adds a new member: id
   - Has a method to set student data (name, age, id)
   - Has a method to display student information

3. In main:
   - We create a Student object
   - Set its data using setStudent()
   - Display all information using showStudent()
*/

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};

// Derived class using public inheritance
class Student : public Person {
public:
    int id;

    void setStudent(string n, int a, int i) {
        setPerson(n, a);  // using base class method
        id = i;
    }

    void showStudent() {
        cout << "Name: " << name << ", Age: " << age 
             << ", ID: " << id << endl;
    }
};

int main() {
    Student s;
    s.setStudent("Umar", 19, 101);
    s.showStudent();

    return 0;
}
