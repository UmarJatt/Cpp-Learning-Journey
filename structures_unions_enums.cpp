#include <iostream>
using namespace std;

int main() {
    // =========================
    // Structure example
    // =========================
    struct Student {
        int id;
        string name;
        float marks;
    };

    Student s1 = {1, "Umar", 95.5};
    cout << "Student Details:" << endl;
    cout << "ID: " << s1.id << ", Name: " << s1.name << ", Marks: " << s1.marks << endl;

    // =========================
    // Union example
    // =========================
    union Data {
        int intVal;
        float floatVal;
        char charVal;
    };

    Data d;
    d.intVal = 10;
    cout << "\nUnion Example:" << endl;
    cout << "Int: " << d.intVal << endl;

    d.floatVal = 3.14; // overwrites previous value
    cout << "Float (overwrites int): " << d.floatVal << endl;

    d.charVal = 'A'; // overwrites previous value
    cout << "Char (overwrites float): " << d.charVal << endl;

    // =========================
    // Enum example
    // =========================
    enum Colors { RED, GREEN, BLUE };
    Colors c = GREEN;
    cout << "\nEnum Example:" << endl;
    cout << "Enum value GREEN: " << c << endl; // prints integer 1

    return 0;
}
