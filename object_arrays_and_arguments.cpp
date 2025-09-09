#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    void setData(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Function taking object as argument
    void compare(Student s) {
        if (id == s.id)
            cout << "Student " << name << " has the same ID as " << s.name << endl;
        else
            cout << "Student " << name << " has a different ID than " << s.name << endl;
    }
};

int main() {
    // Array of objects
    Student students[3];

    // Assign data
    students[0].setData(1, "Umar");
    students[1].setData(2, "Ali");
    students[2].setData(1, "Sara");

    // Display all students
    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    // Passing object as argument
    cout << "\nComparing Students:\n";
    students[0].compare(students[2]); // compare Umar with Sara
    students[0].compare(students[1]); // compare Umar with Ali

    return 0;
}
