// This program demonstrates:
// 1. Creating an array of objects
// 2. Passing objects as function arguments
// 3. Comparing object data

#include <iostream>
using namespace std;

// =========================
// Class Definition
// =========================
class Student {
private:
    int id;         // private member: student ID
    string name;    // private member: student name

public:
    // Function to set student data
    void setData(int i, string n) {
        id = i;
        name = n;
    }

    // Function to display student data
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Function that takes another Student object to compare IDs
    void compare(Student s) {
        if (id == s.id)
            cout << "Student " << name << " has the same ID as " << s.name << endl;
        else
            cout << "Student " << name << " has a different ID than " << s.name << endl;
    }
};

int main() {

    // =========================
    // Array of objects
    // =========================
    Student students[3]; // array to store 3 Student objects

    // Assign data to each student
    students[0].setData(1, "Umar");
    students[1].setData(2, "Ali");
    students[2].setData(1, "Sara");

    // Display all students
    cout << "Student Details:\n";
    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    // =========================
    // Compare objects
    // =========================
    cout << "\nComparing Students:\n";
    students[0].compare(students[2]); // compare Umar with Sara
    students[0].compare(students[1]); // compare Umar with Ali

    return 0; // end of program
}
