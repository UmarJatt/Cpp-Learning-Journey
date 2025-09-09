#include <iostream>
using namespace std;

int main() {
    // Allocate a single integer dynamically
    int* ptr = new int(10);   // initialize with 10
    cout << "Value at ptr: " << *ptr << endl;
    delete ptr;  // free memory

    // Allocate array dynamically
    int* arr = new int[5];   // allocate 5 integers
    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;
    }

    cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;  // free array memory

    // Dynamically allocate an object
    class Student {
    public:
        string name;
        int age;
        Student(string n, int a) : name(n), age(a) {
            cout << "Constructor called for " << name << endl;
        }
        void show() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
    };

    Student* s = new Student("Umar", 19); // object created dynamically
    s->show();
    delete s;  // destructor called, memory freed

    return 0;
}
