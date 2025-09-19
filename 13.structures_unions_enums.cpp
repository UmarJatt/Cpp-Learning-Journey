// This program demonstrates:
// 1. Structures
// 2. Unions
// 3. Enums in C++

#include <iostream>
using namespace std;

int main() {

    // =========================
    // 1️⃣ Structure Example
    // =========================
    // Structure groups different data types together
    struct Student {
        int id;
        string name;
        float marks;
    };

    Student s1 = {1, "Umar", 95.5}; // initialize a student
    cout << "Student Details:" << endl;
    cout << "ID: " << s1.id 
         << ", Name: " << s1.name 
         << ", Marks: " << s1.marks << endl;

    // =========================
    // 2️⃣ Union Example
    // =========================
    // Union shares memory for all members, only one value at a time
    union Data {
        int intVal;
        float floatVal;
        char charVal;
    };

    Data d;
    d.intVal = 10; // store integer
    cout << "\nUnion Example:" << endl;
    cout << "Int: " << d.intVal << endl;

    d.floatVal = 3.14; // overwrites previous value
    cout << "Float (overwrites int): " << d.floatVal << endl;

    d.charVal = 'A'; // overwrites previous value
    cout << "Char (overwrites float): " << d.charVal << endl;

    // =========================
    // 3️⃣ Enum Example
    // =========================
    // Enum defines a set of named constants
    enum Colors { RED, GREEN, BLUE };
    Colors c = GREEN; // assign enum value
    cout << "\nEnum Example:" << endl;
    cout << "Enum value GREEN: " << c << endl; // prints integer 1

    return 0; // program ends
}
