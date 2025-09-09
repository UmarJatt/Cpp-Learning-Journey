#include <iostream>
using namespace std;

int main() {
    // =========================
    // Basic Array Example
    // =========================
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Array elements using index: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // =========================
    // Array using pointers
    // =========================
    int *ptr = arr; // points to first element
    cout << "Array elements using pointer: ";
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // pointer arithmetic
    }
    cout << endl;

    // =========================
    // Pointer arithmetic with increment
    // =========================
    cout << "Array elements using pointer increment: ";
    int *p = arr;
    for(int i = 0; i < 5; i++) {
        cout << *p << " ";
        p++; // move to next element
    }
    cout << endl;

    // =========================
    // Accessing array elements using pointer and index
    // =========================
    cout << "Access using pointer[index]: ";
    for(int i = 0; i < 5; i++) {
        cout << ptr[i] << " "; // same as arr[i]
    }
    cout << endl;

    // =========================
    // Multi-dimensional array and pointer arithmetic
    // =========================
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    cout << "2x3 Matrix elements using pointer: " << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << *(*(matrix + i) + j) << " "; // pointer arithmetic
        }
        cout << endl;
    }

    return 0;
}
