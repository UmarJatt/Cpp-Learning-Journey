// This program demonstrates the use of break and continue statements in C++
// 1. Break in for loop and while loop
// 2. Continue in for loop and while loop

#include <iostream>
using namespace std;

int main() {

    // =========================
    // 1️⃣ Break Statement in For Loop
    // =========================
    cout << "===== Break Statement =====" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            cout << "Breaking at i = " << i << endl;
            break; // exit the loop immediately
        }
        cout << i << " ";
    }
    cout << endl;

    // =========================
    // 2️⃣ Continue Statement in For Loop
    // =========================
    cout << "\n===== Continue Statement =====" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // skip even numbers
        }
        cout << i << " "; // prints only odd numbers
    }
    cout << endl;

    // =========================
    // 3️⃣ Break in While Loop
    // =========================
    cout << "\nBreak in while loop example:" << endl;
    int j = 1;
    while (j <= 10) {
        if (j == 5) break; // exit loop when j = 5
        cout << j << " ";
        j++;
    }
    cout << endl;

    // =========================
    // 4️⃣ Continue in While Loop
    // =========================
    cout << "\nContinue in while loop example:" << endl;
    int k = 0;
    while (k < 10) {
        k++;
        if (k % 3 == 0) continue; // skip multiples of 3
        cout << k << " ";
    }
    cout << endl;

    return 0; // end of program
}
