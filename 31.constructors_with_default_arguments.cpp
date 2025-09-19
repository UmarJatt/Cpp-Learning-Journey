/*
This program demonstrates the use of a constructor with default arguments in C++:

1️⃣ Default Arguments: Allows the constructor to be called with zero, one, or two parameters.
2️⃣ Object Creation: Shows different ways to create objects using defaults.
3️⃣ Display Function: Prints the object's ID and Name.
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
    // Constructor with default arguments
    // If no arguments are provided, id=0 and name="Not Assigned"
    Student(int i = 0, string n = "Not Assigned") {
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
    // Creating objects using constructor with default arguments
    Student s1;               // Both defaults used (id=0, name="Not Assigned")
    Student s2(101);          // Default name used (name="Not Assigned")
    Student s3(102, "Umar");  // No defaults used

    // Displaying object data
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
