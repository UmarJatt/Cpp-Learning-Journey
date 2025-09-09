#include <iostream>
using namespace std;

int main() {
    // =========================
    // While loop example
    // =========================
    cout << "===== While Loop =====" << endl;
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // =========================
    // For loop example
    // =========================
    cout << "\n===== For Loop =====" << endl;
    for (int j = 1; j <= 5; j++) {
        cout << j << " ";
    }
    cout << endl;

    // =========================
    // Do-while loop example
    // =========================
    cout << "\n===== Do-While Loop =====" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;

    // =========================
    // Nested loops example
    // =========================
    cout << "\n===== Nested Loops (Multiplication Table 1-5) =====" << endl;
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= 5; col++) {
            cout << row * col << "\t";
        }
        cout << endl;
    }

    return 0;
}
