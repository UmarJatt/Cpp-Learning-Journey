// This program demonstrates pointers in C++:
// 1. Basic pointer usage
// 2. Changing value through pointer
// 3. Pointer to pointer
// 4. Null pointer
// 5. Pointer arithmetic with arrays

#include <iostream>
using namespace std;

int main() {

    // =========================
    // 1️⃣ Basic Pointer Example
    // =========================
    int a = 10;
    int *ptr = &a; // ptr stores the address of a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value at ptr (dereferencing): " << *ptr << endl;

    // =========================
    // 2️⃣ Changing value using pointer
    // =========================
    *ptr = 20; // change value of a using pointer
    cout << "New value of a (after changing via ptr): " << a << endl;

    // =========================
    // 3️⃣ Pointer to pointer
    // =========================
    int **pptr = &ptr; // pointer to pointer
    cout << "Pointer to pointer stores address: " << pptr << endl;
    cout << "Value at pointer to pointer: " << **pptr << endl;

    // =========================
    // 4️⃣ Null Pointer
    // =========================
    int *nullPtr = nullptr; // pointer that points to nothing
    if (nullPtr == nullptr) {
        cout << "nullPtr is a null pointer." << endl;
    }

    // =========================
    // 5️⃣ Pointer Arithmetic with Array
    // =========================
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr = arr; // points to first element of array

    cout << "\nArray elements using pointer arithmetic: ";
    for (int i = 0; i < 5; i++) {
        cout << *(arrPtr + i) << " "; // move pointer to next element
    }
    cout << endl;

    return 0; // end of program
}
