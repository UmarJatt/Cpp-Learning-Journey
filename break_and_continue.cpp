#include <iostream>
using namespace std;

int main() {
    // =========================
    // Break statement example
    // =========================
    cout << "===== Break Statement =====" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            cout << "Breaking at i = " << i << endl;
            break; // exit the loop
        }
        cout << i << " ";
    }
    cout << endl;

    // =========================
    // Continue statement example
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
    // Break in while loop
    // =========================
    cout << "\nBreak in while loop example:" << endl;
    int j = 1;
    while (j <= 10) {
        if (j == 5) break;
        cout << j << " ";
        j++;
    }
    cout << endl;

    // =========================
    // Continue in while loop
    // =========================
    cout << "\nContinue in while loop example:" << endl;
    int k = 0;
    while (k < 10) {
        k++;
        if (k % 3 == 0) continue; // skip multiples of 3
        cout << k << " ";
    }
    cout << endl;

    return 0;
}
