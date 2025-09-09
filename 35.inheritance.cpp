#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Single Inheritance
class Student : public Person {
private:
    int id;

public:
    void setStudent(string n, int a, int i) {
        setPerson(n, a);
        id = i;
    }
    void showStudent() {
        showPerson();
        cout << "ID: " << id << endl;
    }
};

// Multiple Inheritance
class Sports {
protected:
    string game;
public:
    void setGame(string g) { game = g; }
    void showGame() { cout << "Game: " << game << endl; }
};

class AthleteStudent : public Student, public Sports {
public:
    void showAthlete() {
        showStudent();
        showGame();
    }
};

// Multilevel Inheritance
class Graduate : public Student {
private:
    string degree;
public:
    void setGraduate(string n, int a, int i, string d) {
        setStudent(n, a, i);
        degree = d;
    }
    void showGraduate() {
        showStudent();
        cout << "Degree: " << degree << endl;
    }
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
