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
