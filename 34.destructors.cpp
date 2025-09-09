#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    cout << "Creating objects...\n";
    Student s1(101, "Umar");
    Student s2(102, "Ali");

    s1.display();
    s2.display();

    cout << "End of main function...\n";

    return 0; // destructors are called automatically here
}
