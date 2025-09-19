// This program demonstrates different types of loops in C++:
// 1. While loop
// 2. For loop
// 3. Do-while loop
// 4. Nested loops (multiplication table)

#include <iostream>
using namespace std;

int main() {

    // =========================
    // 1️⃣ While Loop Example
    // =========================
    cout << "===== While Loop =====" << endl;
    int i = 1;
    while (i <= 5) {   // repeat while i <= 5
        cout << i << " ";
        i++;           // increment i
    }
    cout << endl;

    // =========================
    // 2️⃣ For Loop Example
    // =========================
    cout << "\n===== For Loop =====" << endl;
    for (int j = 1; j <= 5; j++) {  // j goes from 1 to 5
        cout << j << " ";
    }
    cout << endl;

    // =========================
    // 3️⃣ Do-While Loop Example
    // =========================
    cout << "\n===== Do-While Loop =====" << endl;
    int k = 1;
    do {                  // run first, then check condition
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;

    // =========================
    // 4️⃣ Nested Loops Example
    // =========================
    cout << "\n===== Nested Loops (Multiplication Table 1-5) =====" << endl;
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= 5; col++) {
            cout << row * col << "\t";  // \t adds a tab space
        }
        cout << endl;
    }

    return 0; // program ends
}
