/*
This program demonstrates **multiple inheritance** in C++:

1. Base class 1: Person
   - Members: name, age (protected)
   - Methods: setPerson(), showPerson()

2. Base class 2: Skills
   - Members: skill (protected)
   - Methods: setSkill(), showSkill()

3. Derived class: Student (inherits from both Person and Skills)
   - Adds: id (private)
   - Methods: setStudent(), showStudent()
   - Can access protected members of both base classes

4. Main function:
   - Create a Student object
   - Set details using setStudent()
   - Display all details using showStudent()
*/

#include <iostream>
using namespace std;

// Base class 1
class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Base class 2
class Skills {
protected:
    string skill;
public:
    void setSkill(string s) {
        skill = s;
    }
    void showSkill() {
        cout << "Skill: " << skill << endl;
    }
};

// Derived class inheriting from two base classes
class Student : public Person, public Skills {
    int id;
public:
    void setStudent(string n, int a, int i, string s) {
        setPerson(n, a);  // Set base class 1 members
        setSkill(s);      // Set base class 2 members
        id = i;           // Set derived class member
    }
    void showStudent() {
        showPerson();     // Display Person info
        showSkill();      // Display Skills info
        cout << "ID: " << id << endl; // Display derived class info
    }
};

int main() {
    Student s;
    s.setStudent("Umar", 19, 101, "C++ Programming");
    s.showStudent();

    return 0;
}
