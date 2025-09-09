#include <iostream>  // for input/output
#include <cmath>     // for math functions
#include <iomanip>   // for formatting
using namespace std;

int main() {
    // =========================
    // Arithmetic Operators
    // =========================
    int a = 10, b = 3;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;     // integer division
    cout << "a % b = " << a % b << endl;     // modulus
    cout << "a^b using pow(): " << pow(a, b) << endl; // math function

    // =========================
    // Assignment Operators
    // =========================
    int x = 5;
    x += 3; // x = x + 3
    cout << "x after += 3: " << x << endl;
    x -= 2;
    cout << "x after -= 2: " << x << endl;
    x *= 4;
    cout << "x after *= 4: " << x << endl;
    x /= 3;
    cout << "x after /= 3: " << x << endl;
    x %= 2;
    cout << "x after %= 2: " << x << endl;

    // =========================
    // Increment & Decrement
    // =========================
    int i = 10;
    cout << "i++: " << i++ << endl; // post-increment
    cout << "++i: " << ++i << endl; // pre-increment
    cout << "i--: " << i-- << endl; // post-decrement
    cout << "--i: " << --i << endl; // pre-decrement

    // =========================
    // Comparison Operators
    // =========================
    int p = 5, q = 7;
    cout << "p == q: " << (p == q) << endl;
    cout << "p != q: " << (p != q) << endl;
    cout << "p > q: " << (p > q) << endl;
    cout << "p < q: " << (p < q) << endl;
    cout << "p >= q: " << (p >= q) << endl;
    cout << "p <= q: " << (p <= q) << endl;

    // =========================
    // Logical Operators
    // =========================
    bool A = true, B = false;
    cout << "A && B: " << (A && B) << endl; // AND
    cout << "A || B: " << (A || B) << endl; // OR
    cout << "!A: " << (!A) << endl;         // NOT

    // =========================
    // Bitwise Operators
    // =========================
    int m = 5, n = 9; // binary: m=0101, n=1001
    cout << "m & n: " << (m & n) << endl; // AND
    cout << "m | n: " << (m | n) << endl; // OR
    cout << "m ^ n: " << (m ^ n) << endl; // XOR
    cout << "~m: " << (~m) << endl;       // NOT
    cout << "m << 1: " << (m << 1) << endl; // left shift
    cout << "n >> 1: " << (n >> 1) << endl; // right shift

    // =========================
    // Miscellaneous / Header Files Usage
    // =========================
    double value = -12.75;
    cout << "\nUsing <cmath> functions:" << endl;
    cout << "abs(value): " << abs(value) << endl;
    cout << "ceil(value): " << ceil(value) << endl;
    cout << "floor(value): " << floor(value) << endl;
    cout << "sqrt(16): " << sqrt(16) << endl;

    return 0;
}
