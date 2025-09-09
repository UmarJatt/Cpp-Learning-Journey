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
        setPerson(n, a);
        setSkill(s);
        id = i;
    }
    void showStudent() {
        showPerson();
        showSkill();
        cout << "ID: " << id << endl;
    }
};

int main() {
    Student s;
    s.setStudent("Umar", 19, 101, "C++ Programming");
    s.showStudent();

    return 0;
}
