#include <iostream>
using namespace std;

// Class definition
class Student {
private:
    int id;         // encapsulation: private data
    string name;

public:
    // Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Method to display details
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    // Object creation
    Student s1(1, "Umar");
    Student s2(2, "Ali");

    s1.display();
    s2.display();

    return 0;
}
