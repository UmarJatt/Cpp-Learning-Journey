// This program demonstrates:
// 1. Default constructor
// 2. Parameterized constructor
// 3. Copy constructor
// 4. Displaying object data

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
    // -------------------------
    Student() {
        id = 0;
        name = "Unknown";
    }

    // -------------------------
    // Parameterized Constructor
    // -------------------------
    Student(int i, string n) {
        id = i;
        name = n;
    }

    // -------------------------
    // Copy Constructor
    // -------------------------
    Student(const Student &s) {
        id = s.id;
        name = s.name;
    }

    // Function to display student info
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

// =========================
// Main Function
// =========================
int main() {
    // Using Default Constructor
    Student s1;
    s1.display();

    // Using Parameterized Constructor
    Student s2(101, "Umar");
    s2.display();

    // Using Copy Constructor
    Student s3(s2);
    s3.display();

    return 0;
}
