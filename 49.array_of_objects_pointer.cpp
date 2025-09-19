/*
    This program demonstrates how to use a class with constructors and dynamic arrays:

    1. The Student class has a default and parameterized constructor.
    2. We can set data using a member function.
    3. We create a dynamic array of Student objects using 'new'.
    4. Input data for each student and display it.
    5. Free the memory after use with 'delete[]'.
*/

#include <iostream>
using namespace std;

// Class to store student information
class Student {
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Function to set data
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    // Function to display student details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Create dynamic array of Student objects
    Student* students = new Student[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        string name;
        int age;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> age;

        students[i].setData(name, age);  // Store data in array
    }

    // Display all students
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    // Free allocated memory
    delete[] students;

    return 0;
}
