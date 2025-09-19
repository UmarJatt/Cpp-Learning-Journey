/*
Program: Constructor Initialization List in C++

Description:
This program demonstrates how to use a constructor initialization list in C++.
- The class Student has a const member rollNo, which must be initialized at the time of object creation.
- Constructor initialization list allows initializing const members, references, or other members efficiently.
- The constructor initializes rollNo, name, and age using the initialization list.
- The showStudent() method displays the student's details.

Key Points:
1. const members cannot be assigned inside the constructor body; they must be initialized.
2. Initialization list syntax: ClassName(type var1, type var2, ...) : member1(val1), member2(val2), ... {}
*/

#include <iostream>
using namespace std;

class Student {
    const int rollNo;   // const must be initialized
    string name;
    int age;

public:
    // Constructor using initialization list
    Student(int r, string n, int a) : rollNo(r), name(n), age(a) {
        cout << "Constructor called using initialization list" << endl;
    }

    void showStudent() {
        cout << "Roll No: " << rollNo 
             << ", Name: " << name 
             << ", Age: " << age << endl;
    }
};

int main() {
    // Creating a Student object
    Student s(101, "Umar", 19);
    s.showStudent();

    return 0;
}
