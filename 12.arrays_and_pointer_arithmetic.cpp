// This program demonstrates arrays in C++ and how pointers can be used to access them:
// 1. Basic array usage
// 2. Array access using pointers
// 3. Pointer arithmetic
// 4. Multi-dimensional arrays with pointers

#include <iostream>
using namespace std;

int main() {

    // =========================
    // 1️⃣ Basic Array Example
    // =========================
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array elements using index: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " "; // access using index
    }
    cout << endl;

    // =========================
    // 2️⃣ Array using pointers
    // =========================
    int *ptr = arr; // pointer points to first element of array
    cout << "Array elements using pointer: ";
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // pointer arithmetic
    }
    cout << endl;

    // =========================
    // 3️⃣ Pointer arithmetic with increment
    // =========================
    cout << "Array elements using pointer increment: ";
    int *p = arr;
    for(int i = 0; i < 5; i++) {
        cout << *p << " "; // value at pointer
        p++;               // move pointer to next element
    }
    cout << endl;

    // =========================
    // 4️⃣ Access array using pointer[index]
    // =========================
    cout << "Access using pointer[index]: ";
    for(int i = 0; i < 5; i++) {
        cout << ptr[i] << " "; // same as arr[i]
    }
    cout << endl;

    // =========================
    // 5️⃣ Multi-dimensional array and pointer arithmetic
    // =========================
    int matrix[2][3] = {{1,2,3}, {4,5,6}};
    cout << "2x3 Matrix elements using pointer: " << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << *(*(matrix + i) + j) << " "; // row and column pointer arithmetic
        }
        cout << endl;
    }

    return 0; // end of program
}
