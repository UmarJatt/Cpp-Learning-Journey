#include <iostream>
using namespace std;

class Student {
    const int rollNo;   // const must be initialized
    string name;
    int age;

public:
    // Constructor using initialization list
    Student(int r, string n, int a) : rollNo(r), name(n), age(a) {
        cout << "Constructor called using initialization list" << endl;
    }

    void showStudent() {
        cout << "Roll No: " << rollNo 
             << ", Name: " << name 
             << ", Age: " << age << endl;
    }
};

int main() {
    Student s(101, "Umar", 19);
    s.showStudent();

    return 0;
}
