#include <iostream>
using namespace std;

/*
This program demonstrates **virtual inheritance** and how it solves the diamond problem.

1. Base class: Person
   - Protected member: name
   - Methods: setName(), showName()

2. Derived class 1: Student
   - Virtually inherits Person
   - Method: study() uses name

3. Derived class 2: Employee
   - Virtually inherits Person
   - Method: work() uses name

4. Derived class 3: WorkingStudent
   - Inherits both Student and Employee
   - Method: balanceLife() uses name
   - Only **one copy of Person** exists due to virtual inheritance

5. Main function:
   - Create WorkingStudent object
   - Set name
   - Call showName(), study(), work(), balanceLife()
*/

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
