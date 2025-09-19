/*
This program demonstrates how to use:

1️⃣ Parameterized Constructor: Initializes an object with given values.
2️⃣ Copy Constructor: Creates a new object as a copy of an existing object.
3️⃣ Display Function: Prints the object’s data.
*/

#include <iostream>
using namespace std;

// =========================
// Student Class
// =========================
class Student {
private:
    int id;
    string name;

public:
    // Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
    }

    // Copy Constructor
    Student(const Student &s) {
        id = s.id;
        name = s.name;
    }

    // Function to display student details
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

// =========================
// Main Function
// =========================
int main() {
    // Create object using parameterized constructor
    Student s1(101, "Umar");
    cout << "Original Object: ";
    s1.display();

    // Create object using copy constructor
    Student s2(s1);
    cout << "Copied Object: ";
    s2.display();

    return 0;
}
