// This program demonstrates:
// 1. Default constructor
// 2. Parameterized constructor
// 3. Displaying object data

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
    // -------------------------
    // Default Constructor
    // Initializes id and name with default values
    // -------------------------
    Student() {
        id = 0;
        name = "Not Assigned";
    }

    // -------------------------
    // Parameterized Constructor
    // Initializes id and name with given values
    // -------------------------
    Student(int i, string n) {
        id = i;
        name = n;
    }

    // -------------------------
    // Display function
    // Prints the student's id and name
    // -------------------------
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

// =========================
// Main Function
// =========================
int main() {
    // Object created using Default Constructor
    Student s1;
    s1.display();

    // Object created using Parameterized Constructor
    Student s2(101, "Umar");
    s2.display();

    return 0;
}
