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

// Derived class with public inheritance
class Student : public Person {
    int id;
public:
    void setStudent(string n, int a, int i) {
        setPerson(n, a);   // accessible because setPerson is public
        id = i;
    }
    void showStudent() {
        showPerson();      // accessing base class method
        cout << "ID: " << id << endl;
    }
};

// Derived class with protected inheritance
class Teacher : protected Person {
    string subject;
public:
    void setTeacher(string n, int a, string sub) {
        setPerson(n, a);  // still accessible here
        subject = sub;
    }
    void showTeacher() {
        showPerson();
        cout << "Subject: " << subject << endl;
    }
};

// Derived class with private inheritance
class Staff : private Person {
    string role;
public:
    void setStaff(string n, int a, string r) {
        setPerson(n, a);  // allowed inside derived class
        role = r;
    }
    void showStaff() {
        showPerson();
        cout << "Role: " << role << endl;
    }
};

int main() {
    Student s;
    s.setStudent("Umar", 19, 101);
    s.showStudent();

    Teacher t;
    t.setTeacher("Ali", 40, "Math");
    t.showTeacher();

    Staff st;
    st.setStaff("Ahmed", 35, "Clerk");
    st.showStaff();

    return 0;
}
