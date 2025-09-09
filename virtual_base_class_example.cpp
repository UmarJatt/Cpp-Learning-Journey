#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    void showName() {
        cout << "Name: " << name << endl;
    }
};

// Derived class 1 with virtual inheritance
class Student : virtual public Person {
public:
    void study() {
        cout << name << " is studying" << endl;
    }
};

// Derived class 2 with virtual inheritance
class Employee : virtual public Person {
public:
    void work() {
        cout << name << " is working" << endl;
    }
};

// Derived class inheriting from both Student and Employee
class WorkingStudent : public Student, public Employee {
public:
    void balanceLife() {
        cout << name << " is balancing study and work" << endl;
    }
};

int main() {
    WorkingStudent ws;
    ws.setName("Umar");   // Only ONE Person copy exists
    ws.showName();
    ws.study();
    ws.work();
    ws.balanceLife();

    return 0;
}
