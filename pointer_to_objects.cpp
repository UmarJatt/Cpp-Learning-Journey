#include <iostream>
using namespace std;

// Class definition
class Student {
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating object normally
    Student s1("Umar", 19);
    s1.display();

    // Creating pointer to object
    Student* ptr = &s1;
    cout << "Using pointer to object:" << endl;
    ptr->display();  // Access using ->

    // Dynamically creating object
    Student* s2 = new Student("Ali", 20);
    cout << "Dynamically created object:" << endl;
    s2->display();

    // Free dynamically allocated memory
    delete s2;

    return 0;
}
