// This program demonstrates:
// 1. Dynamic memory allocation in C++
// 2. Using pointers inside a class
// 3. Constructor and destructor for memory management

#include <iostream>
using namespace std;

// =========================
// Class Definition
// =========================
class Student {
private:
    int *marks;  // pointer to store dynamic array of marks
    int size;    // number of subjects

public:
    // Constructor: allocates memory dynamically
    Student(int n) {
        size = n;
        marks = new int[size]; // allocate memory for 'size' integers
    }

    // Function to input marks
    void inputMarks() {
        cout << "Enter " << size << " marks: ";
        for (int i = 0; i < size; i++) {
            cin >> marks[i];
        }
    }

    // Function to display marks
    void displayMarks() {
        cout << "Marks: ";
        for (int i = 0; i < size; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    // Destructor: frees allocated memory
    ~Student() {
        delete[] marks;
        cout << "Memory freed!" << endl;
    }
};

int main() {

    int n;
    cout << "How many subjects? ";
    cin >> n;

    Student s(n); // create object with dynamic array
    s.inputMarks();    // input marks
    s.displayMarks();  // display marks

    return 0; // end of program
}
