#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void show() {
        cout << "I am a Person" << endl;
    }
};

// Derived class 1 (virtual inheritance)
class Student : virtual public Person {
public:
    void study() {
        cout << "I am studying" << endl;
    }
};

// Derived class 2 (virtual inheritance)
class Teacher : virtual public Person {
public:
    void teach() {
        cout << "I am teaching" << endl;
    }
};

// Derived class from both Student and Teacher
class Assistant : public Student, public Teacher {
public:
    void work() {
        cout << "I am assisting" << endl;
    }
};

int main() {
    Assistant a;
    a.show();   // No ambiguity because of virtual base class
    a.study();
    a.teach();
    a.work();

    return 0;
}
