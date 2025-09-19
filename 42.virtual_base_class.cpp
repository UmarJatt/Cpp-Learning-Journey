/*
This program demonstrates **virtual inheritance** to solve the diamond problem:

1. Base class: Person
   - Method: show() prints "I am a Person"

2. Derived class 1: Student
   - Inherits **virtually** from Person
   - Method: study()

3. Derived class 2: Teacher
   - Inherits **virtually** from Person
   - Method: teach()

4. Derived class 3: Assistant
   - Inherits from both Student and Teacher
   - Method: work()
   - No ambiguity occurs for show() because Student and Teacher inherit Person virtually

5. Main function:
   - Create Assistant object
   - Call show(), study(), teach(), work()
   - Only **one copy of Person** exists due to virtual inheritance
*/

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void show() {
        cout << "I am a Person" << endl;
    }
};

// Derived class 1 (virtual inheritance)
class Student : virtual public Person {
public:
    void study() {
        cout << "I am studying" << endl;
    }
};

// Derived class 2 (virtual inheritance)
class Teacher : virtual public Person {
public:
    void teach() {
        cout << "I am teaching" << endl;
    }
};

// Derived class from both Student and Teacher
class Assistant : public Student, public Teacher {
public:
    void work() {
        cout << "I am assisting" << endl;
    }
};

int main() {
    Assistant a;
    a.show();   // No ambiguity due to virtual inheritance
    a.study();
    a.teach();
    a.work();

    return 0;
}
