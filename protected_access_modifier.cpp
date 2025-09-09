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
