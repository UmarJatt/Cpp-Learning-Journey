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

    // Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    // Object with Default Constructor
    Student s1;
    s1.display();

    // Object with Parameterized Constructor
    Student s2(101, "Umar");
    s2.display();

    return 0;
}
