/*
    This program demonstrates dynamic memory allocation in C++.

    1. We create a single integer dynamically and free its memory.
    2. We create an array dynamically, fill it with values, display it, and then free its memory.
    3. We create an object dynamically using a Student class, display its data, and free the memory.

    Dynamic memory is allocated using 'new' and freed using 'delete'.
*/

#include <iostream>
using namespace std;

// Simple Student class
class Student {
public:
    string name;
    int age;

    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }

    // Display function
    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // -----------------------
    // 1. Single integer
    // -----------------------
    int* ptr = new int(10);   // allocate integer dynamically
    cout << "Value at ptr: " << *ptr << endl;
    delete ptr;               // free memory

    // -----------------------
    // 2. Dynamic array
    // -----------------------
    int* arr = new int[5];    // allocate array of 5 integers
    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;   // assign values 10,20,30,40,50
    }

    cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;  // free array memory

    // -----------------------
    // 3. Dynamic object
    // -----------------------
    Student* s = new Student("Umar", 19);  // object created dynamically
    s->show();
    delete s;       // destructor called and memory freed

    return 0;
}
