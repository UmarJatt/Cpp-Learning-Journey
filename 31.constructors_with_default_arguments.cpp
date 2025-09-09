#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Constructor with default arguments
    Student(int i = 0, string n = "Not Assigned") {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    // Using default arguments
    Student s1;               // Both defaults used
    Student s2(101);          // Default name used
    Student s3(102, "Umar");  // No defaults used

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
