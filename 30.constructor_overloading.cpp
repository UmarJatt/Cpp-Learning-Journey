/*
This program demonstrates different types of constructors in C++:

1️⃣ Default Constructor: Automatically assigns default values when an object is created.
2️⃣ Parameterized Constructor: Allows setting values during object creation.
3️⃣ Constructor Overloading: Using multiple constructors with different parameters.
4️⃣ Display Function: Prints the object's data (id and name).
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
    // Default constructor: sets default values
    Student() {
        id = 0;
        name = "Not Assigned";
    }

    // Constructor with 1 parameter: sets id, name defaults to "Unknown"
    Student(int i) {
        id = i;
        name = "Unknown";
    }

    // Constructor with 2 parameters: sets both id and name
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
    // Creating objects using different constructors
    Student s1;                  // Default constructor
    Student s2(101);             // Constructor with 1 parameter
    Student s3(102, "Umar");     // Constructor with 2 parameters

    // Displaying the objects' data
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
