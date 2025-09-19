// This program demonstrates encapsulation in C++
// 1. Private and public members
// 2. Getter and Setter functions

#include <iostream>
using namespace std;

// =========================
// Class Definition
// =========================
class Person {
private:
    int age; // private member, cannot be accessed directly outside the class

public:
    string name; // public member, can be accessed directly

    // Setter function: to set private member 'age'
    void setAge(int a) {
        age = a;
    }

    // Getter function: to get private member 'age'
    int getAge() {
        return age;
    }
};

int main() {

    Person p1;

    // Access public member directly
    p1.name = "Umar";
    cout << "Name: " << p1.name << endl;

    // Private member cannot be accessed directly
    // p1.age = 20; ❌ Not allowed

    // Access private member via public methods
    p1.setAge(20);
    cout << "Age: " << p1.getAge() << endl;

    return 0; // end of program
}
