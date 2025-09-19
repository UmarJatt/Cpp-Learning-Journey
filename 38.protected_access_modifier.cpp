/*
This program demonstrates protected members and single inheritance in C++:

1. Base class: Person
   - Members: name and age
   - Access specifier: protected
       * Accessible inside the base class and its derived classes
       * NOT accessible directly from outside

2. Derived class: Student (publicly inherits Person)
   - Adds id
   - Can access base class's protected members (name, age) directly
   - Provides methods to set and display student info

3. Main function:
   - Create a Student object
   - Set values using setStudent()
   - Display values using showStudent()
   - Direct access to protected members from outside the class is NOT allowed
*/

#include <iostream>
using namespace std;

// Base class
class Person {
protected:   // accessible inside this class and derived classes
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};

// Derived class
class Student : public Person {
    int id;
public:
    void setStudent(string n, int a, int i) {
        // accessing protected members from base class
        name = n;
        age = a;
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

    // ❌ Not allowed: s.name = "Ali";  // Error, protected outside class

    return 0;
}
