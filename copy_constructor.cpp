#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
    }

    // Copy Constructor
    Student(const Student &s) {
        id = s.id;
        name = s.name;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    // Creating object with parameterized constructor
    Student s1(101, "Umar");
    cout << "Original Object: ";
    s1.display();

    // Creating object using Copy Constructor
    Student s2(s1);
    cout << "Copied Object: ";
    s2.display();

    return 0;
}
