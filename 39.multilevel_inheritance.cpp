/*
This program demonstrates **multilevel inheritance** in C++:

1. Base class: Person
   - Members: name, age (protected)
   - Methods: setPerson(), showPerson()

2. Derived class: Student (inherits from Person)
   - Adds: id (protected)
   - Methods: setStudent(), showStudent()
   - Can access Person's protected members

3. Derived class: Graduate (inherits from Student)
   - Adds: thesisTitle (private by default)
   - Methods: setGraduate(), showGraduate()
   - Can access Student's protected members, which include id, name, age

4. Main function:
   - Create a Graduate object
   - Set all details using setGraduate()
   - Display details using showGraduate()
*/

#include <iostream>
using namespace std;

// Base class
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

// Derived class (inherits from Person)
class Student : public Person {
protected:
    int id;
public:
    void setStudent(string n, int a, int i) {
        setPerson(n, a);
        id = i;
    }
    void showStudent() {
        showPerson();
        cout << "ID: " << id << endl;
    }
};

// Derived from Student (further extending the chain)
class Graduate : public Student {
    string thesisTitle;
public:
    void setGraduate(string n, int a, int i, string thesis) {
        setStudent(n, a, i);
        thesisTitle = thesis;
    }
    void showGraduate() {
        showStudent();
        cout << "Thesis Title: " << thesisTitle << endl;
    }
};

int main() {
    Graduate g;
    g.setGraduate("Umar", 19, 101, "C++ OOP Concepts");
    g.showGraduate();

    return 0;
}
