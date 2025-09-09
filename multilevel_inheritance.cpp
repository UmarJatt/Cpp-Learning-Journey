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
