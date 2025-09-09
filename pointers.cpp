#include <iostream>
using namespace std;

int main() {
    // =========================
    // Basic Pointer Example
    // =========================
    int a = 10;
    int *ptr = &a; // ptr stores address of a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value at ptr (dereferencing): " << *ptr << endl;

    // =========================
    // Changing value using pointer
    // =========================
    *ptr = 20;
    cout << "New value of a (after changing via ptr): " << a << endl;

    // =========================
    // Pointer to pointer
    // =========================
    int **pptr = &ptr; // pointer to pointer
    cout << "Pointer to pointer stores address: " << pptr << endl;
    cout << "Value at pointer to pointer: " << **pptr << endl;

    // =========================
    // Null pointer
    // =========================
    int *nullPtr = nullptr;
    if (nullPtr == nullptr)
        cout << "nullPtr is a null pointer." << endl;

    // =========================
    // Pointer arithmetic
    // =========================
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr = arr; // points to first element

    cout << "\nArray elements using pointer arithmetic: ";
    for (int i = 0; i < 5; i++) {
        cout << *(arrPtr + i) << " ";
    }
    cout << endl;

    return 0;
}
