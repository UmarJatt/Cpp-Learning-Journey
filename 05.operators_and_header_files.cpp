// This program demonstrates different operators in C++:
// 1. Arithmetic Operators
// 2. Assignment Operators
// 3. Increment and Decrement
// 4. Comparison Operators
// 5. Logical Operators
// 6. Bitwise Operators
// 7. Using <cmath> functions

#include <iostream>  // for input/output
#include <cmath>     // for math functions like pow, sqrt, abs
#include <iomanip>   // for formatting output (not used here but included for practice)

using namespace std;

int main() {

    // =========================
    // 1️⃣ Arithmetic Operators
    // =========================
    int a = 10, b = 3;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << " (integer division)" << endl;
    cout << "a % b = " << a % b << " (remainder)" << endl;
    cout << "a^b using pow(): " << pow(a, b) << endl;

    // =========================
    // 2️⃣ Assignment Operators
    // =========================
    int x = 5;
    x += 3; // same as x = x + 3
    cout << "x after += 3: " << x << endl;
    x -= 2; // x = x - 2
    cout << "x after -= 2: " << x << endl;
    x *= 4; // x = x * 4
    cout << "x after *= 4: " << x << endl;
    x /= 3; // x = x / 3
    cout << "x after /= 3: " << x << endl;
    x %= 2; // x = x % 2
    cout << "x after %= 2: " << x << endl;

    // =========================
    // 3️⃣ Increment & Decrement
    // =========================
    int i = 10;
    cout << "i++ (post-increment): " << i++ << endl;
    cout << "++i (pre-increment): " << ++i << endl;
    cout << "i-- (post-decrement): " << i-- << endl;
    cout << "--i (pre-decrement): " << --i << endl;

    // =========================
    // 4️⃣ Comparison Operators
    // =========================
    int p = 5, q = 7;
    cout << "p == q: " << (p == q) << endl;
    cout << "p != q: " << (p != q) << endl;
    cout << "p > q: " << (p > q) << endl;
    cout << "p < q: " << (p < q) << endl;
    cout << "p >= q: " << (p >= q) << endl;
    cout << "p <= q: " << (p <= q) << endl;

    // =========================
    // 5️⃣ Logical Operators
    // =========================
    bool A = true, B = false;
    cout << "A && B: " << (A && B) << " (AND)" << endl;
    cout << "A || B: " << (A || B) << " (OR)" << endl;
    cout << "!A: " << (!A) << " (NOT)" << endl;

    // =========================
    // 6️⃣ Bitwise Operators
    // =========================
    int m = 5, n = 9; // m=0101, n=1001 in binary
    cout << "m & n: " << (m & n) << " (AND)" << endl;
    cout << "m | n: " << (m | n) << " (OR)" << endl;
    cout << "m ^ n: " << (m ^ n) << " (XOR)" << endl;
    cout << "~m: " << (~m) << " (NOT)" << endl;
    cout << "m << 1: " << (m << 1) << " (left shift)" << endl;
    cout << "n >> 1: " << (n >> 1) << " (right shift)" << endl;

    // =========================
    // 7️⃣ Using <cmath> functions
    // =========================
    double value = -12.75;
    cout << "\nUsing <cmath> functions:" << endl;
    cout << "abs(value): " << abs(value) << endl;     // absolute value
    cout << "ceil(value): " << ceil(value) << endl;   // round up
    cout << "floor(value): " << floor(value) << endl; // round down
    cout << "sqrt(16): " << sqrt(16) << endl;         // square root

    return 0; // end of program
}
