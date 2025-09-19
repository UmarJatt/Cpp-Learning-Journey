/*
This program demonstrates:

1️⃣ Constructor: Automatically called when an object is created.
2️⃣ Destructor: Automatically called when an object goes out of scope.
3️⃣ Display function: Prints object details.
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
    // Constructor: Called automatically when object is created
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor: Called automatically when object is destroyed
    ~Student() {
        cout << "Destructor called for " << name << endl;
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
    cout << "Creating objects...\n";

    // Creating objects (constructor is called here)
    Student s1(101, "Umar");
    Student s2(102, "Ali");

    // Display object details
    s1.display();
    s2.display();

    cout << "End of main function...\n";

    return 0; // Destructor is automatically called for s1 and s2 here
}
