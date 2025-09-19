// This program demonstrates:
// 1. Static variables and functions in C++ classes
// 2. How static members are shared across all objects

#include <iostream>
using namespace std;

// =========================
// Class Definition
// =========================
class Student {
private:
    int id;          // instance variable
    string name;     // instance variable

    // Static variable: shared by all objects
    static int count;

public:
    // Constructor: increments static count
    Student(int i, string n) {
        id = i;
        name = n;
        count++; // increase count whenever a new object is created
    }

    // Function to display student details
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Static function: can access only static members
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static variable (required outside class)
int Student::count = 0;

int main() {

    Student s1(1, "Umar");
    Student s2(2, "Ali");
    Student s3(3, "Sara");

    // Display details of each student
    s1.display();
    s2.display();
    s3.display();

    // Call static function using class name
    Student::showCount();

    return 0; // end of program
}
