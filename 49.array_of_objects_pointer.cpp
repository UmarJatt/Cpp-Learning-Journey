#include <iostream>
using namespace std;

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

    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Dynamically create array of objects using pointer
    Student* students = new Student[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        string name;
        int age;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> age;

        students[i].setData(name, age);  // Using pointer with array index
    }

    // Display student details
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    // Free dynamically allocated memory
    delete[] students;

    return 0;
}
