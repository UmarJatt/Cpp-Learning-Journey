#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student(string name, int age) {
        // Resolving ambiguity using "this" pointer
        this->name = name;
        this->age = age;
    }

    void setData(string name, int age) {
        // "this" refers to the calling object
        this->name = name;
        this->age = age;
    }

    void display() {
        cout << "Name: " << this->name << ", Age: " << this->age << endl;
    }

    // Returning current object using this pointer
    Student& updateAge(int newAge) {
        this->age = newAge;
        return *this;  // returning object itself
    }
};

int main() {
    // Creating object
    Student s1("Umar", 19);

    s1.display();

    // Using setData (uses this-> internally)
    s1.setData("Ali", 20);
    s1.display();

    // Chaining function calls using return *this
    s1.updateAge(21).display();

    return 0;
}
