#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Parameterized constructor
    Student(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    int id;
    string name;

    // Taking values at runtime
    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Student Name: ";
    cin >> name;

    // Object dynamically initialized with user input
    Student s(id, name);
    s.display();

    return 0;
}
