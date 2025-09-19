/*
    This program shows how to create and use objects in different ways in C++:

    1. Create a normal object and use it.
    2. Use a pointer to an existing object to access its members.
    3. Create an object dynamically using 'new' and free memory with 'delete'.
*/

#include <iostream>
using namespace std;

// Student class with name and age
class Student {
    string name;
    int age;

public:
    // Constructor to initialize data
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Function to display student info
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // ------------------------
    // 1. Normal object
    // ------------------------
    Student s1("Umar", 19);
    cout << "Normal object:" << endl;
    s1.display();

    // ------------------------
    // 2. Pointer to existing object
    // ------------------------
    Student* ptr = &s1;
    cout << "Access using pointer to object:" << endl;
    ptr->display();  // use -> operator for pointer

    // ------------------------
    // 3. Dynamically created object
    // ------------------------
    Student* s2 = new Student("Ali", 20);
    cout << "Dynamically created object:" << endl;
    s2->display();

    delete s2; // free dynamically allocated memory

    return 0;
}
