/*
This program demonstrates different types of inheritance in C++:

1. Single Inheritance:
   - Class Student inherits from Person.
   - Student gets name and age from Person.

2. Multiple Inheritance:
   - Class AthleteStudent inherits from Student and Sports.
   - AthleteStudent can use functions from both Student and Sports.

3. Multilevel Inheritance:
   - Class Graduate inherits from Student (which itself inherits from Person).
   - Shows how inheritance can form a chain.

We create objects of each type and display their data.
*/

#include <iostream>
using namespace std;

// Base Class: Person
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) { name = n; age = a; }
    void showPerson() { cout << "Name: " << name << ", Age: " << age << endl; }
};

// Single Inheritance: Student inherits Person
class Student : public Person {
private:
    int id;

public:
    void setStudent(string n, int a, int i) { setPerson(n, a); id = i; }
    void showStudent() { showPerson(); cout << "ID: " << id << endl; }
};

// Multiple Inheritance: AthleteStudent inherits Student and Sports
class Sports {
protected:
    string game;

public:
    void setGame(string g) { game = g; }
    void showGame() { cout << "Game: " << game << endl; }
};

class AthleteStudent : public Student, public Sports {
public:
    void showAthlete() { showStudent(); showGame(); }
};

// Multilevel Inheritance: Graduate inherits Student
class Graduate : public Student {
private:
    string degree;

public:
    void setGraduate(string n, int a, int i, string d) { setStudent(n, a, i); degree = d; }
    void showGraduate() { showStudent(); cout << "Degree: " << degree << endl; }
};

int main() {
    cout << "---- Single Inheritance ----" << endl;
    Student s;
    s.setStudent("Umar", 19, 101);
    s.showStudent();

    cout << "\n---- Multiple Inheritance ----" << endl;
    AthleteStudent a;
    a.setStudent("Ali", 20, 102);
    a.setGame("Football");
    a.showAthlete();

    cout << "\n---- Multilevel Inheritance ----" << endl;
    Graduate g;
    g.setGraduate("Sara", 22, 103, "BS Software Engineering");
    g.showGraduate();

    return 0;
}
