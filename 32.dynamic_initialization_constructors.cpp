/*
This program demonstrates how to use a parameterized constructor in C++:

1️⃣ Parameterized Constructor: Allows creating objects with custom values at runtime.
2️⃣ Taking Input: Reads student ID and name from the user.
3️⃣ Object Initialization: Initializes the object with user-provided values.
4️⃣ Display: Prints the student details.
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
    // Parameterized constructor
    Student(int i, string n) {
        id = i;
        name = n;
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
    int id;
    string name;

    // Taking values from user at runtime
    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Student Name: ";
    cin >> name;

    // Create object with user input
    Student s(id, name);

    // Display student details
    s.display();

    return 0;
}
