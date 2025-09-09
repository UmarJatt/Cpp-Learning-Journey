#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Default Constructor
    Student() {
        id = 0;
        name = "Not Assigned";
    }

    // Constructor with one parameter
    Student(int i) {
        id = i;
        name = "Unknown";
    }

    // Constructor with two parameters
    Student(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    // Different ways of creating objects
    Student s1;                  // Default constructor
    Student s2(101);             // Constructor with 1 parameter
    Student s3(102, "Umar");     // Constructor with 2 parameters

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
