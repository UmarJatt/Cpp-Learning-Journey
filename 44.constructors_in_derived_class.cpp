#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) {   // Base constructor
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
    Student(string n, int a, int i) : Person(n, a) {  // Call base constructor
        id = i;
        cout << "Student constructor called" << endl;
    }
    void showStudent() {
        showPerson();
        cout << "ID: " << id << endl;
    }
};

int main() {
    Student s("Umar", 19, 101);
    s.showStudent();

    return 0;
}
