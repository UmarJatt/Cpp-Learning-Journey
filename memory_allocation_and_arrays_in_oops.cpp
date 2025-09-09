#include <iostream>
using namespace std;

class Student {
private:
    int *marks;  // pointer for dynamic array
    int size;

public:
    // Constructor to allocate memory
    Student(int n) {
        size = n;
        marks = new int[size]; // dynamic allocation
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

    // Destructor to free memory
    ~Student() {
        delete[] marks;
        cout << "Memory freed!" << endl;
    }
};

int main() {
    int n;
    cout << "How many subjects? ";
    cin >> n;

    Student s(n); // object with dynamic array
    s.inputMarks();
    s.displayMarks();

    return 0;
}
