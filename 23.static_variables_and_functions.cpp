#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

    // Static variable: shared by all objects
    static int count;

public:
    // Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        count++; // increase count when object created
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Static function: can only access static members
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static variable (must be outside class)
int Student::count = 0;

int main() {
    Student s1(1, "Umar");
    Student s2(2, "Ali");
    Student s3(3, "Sara");

    s1.display();
    s2.display();
    s3.display();

    // Static function called using class name
    Student::showCount();

    return 0;
}
